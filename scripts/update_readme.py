#!/usr/bin/env python3
from __future__ import annotations

import json
import re
import urllib.request
from dataclasses import dataclass
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
README_PATH = ROOT / "README.md"
LEETCODE_GRAPHQL_URL = "https://leetcode.com/graphql"

AUTO_START = "<!-- AUTO-SYNCED-PROBLEMS-START -->"
AUTO_END = "<!-- AUTO-SYNCED-PROBLEMS-END -->"
AUTO_NAV = "- [Auto-Synced Problems](#auto-synced-problems)"
AUTO_SECTION_TITLE = "### Auto-Synced Problems"

LANGUAGE_ORDER = ["C++", "Rust"]
LANGUAGE_CONFIG = {
    "C++": {"dir": ROOT / "Cpp", "ext": ".cpp", "folder": "Cpp"},
    "Rust": {"dir": ROOT / "Rust", "ext": ".rs", "folder": "Rust"},
}
SLUG_OVERRIDES = {
    "24_Game": "24-game",
    "Make_Array_Elements_to_Zero": "make-array-elements-equal-to-zero",
    "Next_Greater_Balanced_Number": "next-greater-numerically-balanced-number",
    "Partitioning_Into_Minimum_Of_Deci-Binary_Numbers": "partitioning-into-minimum-number-of-deci-binary-numbers",
    "Taking_Maximum_Energy_the_Mystic_Dungeon": "taking-maximum-energy-from-the-mystic-dungeon",
}

COMPLEXITY_PATTERNS = {
    "time": re.compile(r"Time\s+Complexity\s*[:=-]\s*([^\n\r*]+)", re.IGNORECASE),
    "space": re.compile(r"Space\s+Complexity\s*[:=-]\s*([^\n\r*]+)", re.IGNORECASE),
}


@dataclass
class SolutionFile:
    language: str
    path: Path
    repo_path: str
    title_slug: str
    time_complexity: str | None = None
    space_complexity: str | None = None


def normalize_solution_links(text: str) -> str:
    return re.sub(
        r"\(<\./((?:Cpp|Rust)/[^>]+\.(?:cpp|rs))>\)",
        r"(./\1)",
        text,
    )


def normalize_whitespace(value: str) -> str:
    return re.sub(r"\s+", " ", value).strip()


def sanitize_stem(stem: str) -> str:
    match = re.match(r"^(\d+)[_ -]+(.+)$", stem)
    if not match:
        return stem

    remainder = match.group(2)
    word_count = len([part for part in re.split(r"[_ -]+", remainder) if part])
    return remainder if word_count > 1 else stem


def split_camel_case(value: str) -> str:
    value = re.sub(r"([a-z])([A-Z])", r"\1 \2", value)
    value = re.sub(r"([A-Z]+)([A-Z][a-z])", r"\1 \2", value)
    return value


def humanize_stem(stem: str) -> str:
    stem = sanitize_stem(stem)
    stem = split_camel_case(stem)
    stem = stem.replace("_", " ").replace("-", " ")
    return normalize_whitespace(stem)


def infer_problem_number_from_stem(stem: str) -> str:
    match = re.match(r"^(\d+)", stem)
    return match.group(1) if match else "-"


def infer_title_slug_from_stem(stem: str) -> str:
    if stem in SLUG_OVERRIDES:
        return SLUG_OVERRIDES[stem]

    stem = sanitize_stem(stem)
    slug = []
    previous_dash = False

    for index, ch in enumerate(stem):
        lower_ch = ch.lower()
        next_ch = stem[index + 1] if index + 1 < len(stem) else ""
        prev_ch = stem[index - 1] if index > 0 else ""

        if ch.isalnum():
            if (
                index > 0
                and ch.isupper()
                and not previous_dash
                and (
                    prev_ch.islower()
                    or (prev_ch.isupper() and next_ch.islower())
                )
            ):
                slug.append("-")
            slug.append(lower_ch)
            previous_dash = False
        elif ch in {" ", "_", "-"}:
            if not previous_dash:
                slug.append("-")
                previous_dash = True

    return "".join(slug).strip("-")


def extract_complexities(path: Path) -> tuple[str | None, str | None]:
    try:
        text = path.read_text()
    except UnicodeDecodeError:
        text = path.read_text(encoding="utf-8", errors="ignore")

    time_match = COMPLEXITY_PATTERNS["time"].search(text)
    space_match = COMPLEXITY_PATTERNS["space"].search(text)
    time_value = normalize_whitespace(time_match.group(1)) if time_match else None
    space_value = normalize_whitespace(space_match.group(1)) if space_match else None
    return time_value, space_value


def discover_solutions() -> dict[str, dict[str, SolutionFile]]:
    discovered: dict[str, dict[str, SolutionFile]] = {}

    for language in LANGUAGE_ORDER:
        config = LANGUAGE_CONFIG[language]
        for path in sorted(config["dir"].glob(f"*{config['ext']}")):
            title_slug = infer_title_slug_from_stem(path.stem)
            if not title_slug:
                continue

            time_complexity, space_complexity = extract_complexities(path)
            solution = SolutionFile(
                language=language,
                path=path,
                repo_path=f"{config['folder']}/{path.name}",
                title_slug=title_slug,
                time_complexity=time_complexity,
                space_complexity=space_complexity,
            )
            discovered.setdefault(title_slug, {})[language] = solution

    return discovered


def build_solution_cell(slug: str, solutions_by_slug: dict[str, dict[str, SolutionFile]]) -> str | None:
    solutions = solutions_by_slug.get(slug, {})
    parts = []
    for language in LANGUAGE_ORDER:
        solution = solutions.get(language)
        if solution:
            parts.append(f"[{language}](./{solution.repo_path})")
    return " / ".join(parts) if parts else None


def update_problem_count_badge(text: str, solved_count: int) -> str:
    return re.sub(
        r"Problems%20Solved-\d+-success",
        f"Problems%20Solved-{solved_count}-success",
        text,
        count=1,
    )


def update_overview(text: str) -> str:
    old = (
        "This repository contains **Data Structures & Algorithms (DSA)** solutions for various **LeetCode problems** implemented in **C++**.\n"
        "The solutions are optimized for performance with detailed time and space complexity analysis."
    )
    new = (
        "This repository contains **Data Structures & Algorithms (DSA)** solutions for various **LeetCode problems** implemented in **C++** and **Rust**.\n"
        "Curated sections stay in the existing style, and the auto-synced section fills in any missing C++ or Rust entries."
    )
    return text.replace(old, new, 1)


def extract_readme_problem_slugs(text: str) -> set[str]:
    return set(re.findall(r"https://leetcode\.com/problems/([^/]+)/", text))


def strip_auto_section(text: str) -> str:
    pattern = re.compile(rf"{re.escape(AUTO_START)}.*?{re.escape(AUTO_END)}", re.DOTALL)
    return pattern.sub("", text)


def update_existing_solution_cells(text: str, solutions_by_slug: dict[str, dict[str, SolutionFile]]) -> str:
    updated_lines = []

    for line in text.splitlines():
        if not line.startswith("| ") or "https://leetcode.com/problems/" not in line:
            updated_lines.append(line)
            continue

        columns = line.split("|")
        if len(columns) < 5:
            updated_lines.append(line)
            continue

        match = re.search(r"https://leetcode\.com/problems/([^/]+)/", columns[2])
        if not match:
            updated_lines.append(line)
            continue

        slug = match.group(1)
        solution_cell = build_solution_cell(slug, solutions_by_slug)
        if solution_cell:
            columns[3] = f" {solution_cell} "
            line = "|".join(columns)

        updated_lines.append(line)

    return "\n".join(updated_lines)


def upsert_auto_nav(text: str) -> str:
    if AUTO_NAV in text:
        return text

    marker = "- [Greedy Problems](#greedy-problems)"
    if marker in text:
        return text.replace(marker, f"{marker}\n{AUTO_NAV}", 1)
    return text


def fetch_leetcode_metadata(title_slugs: list[str]) -> dict[str, dict[str, object]]:
    metadata: dict[str, dict[str, object]] = {}
    if not title_slugs:
        return metadata

    chunk_size = 25
    headers = {
        "Content-Type": "application/json",
        "User-Agent": "Mozilla/5.0",
    }

    for start in range(0, len(title_slugs), chunk_size):
        chunk = title_slugs[start : start + chunk_size]
        variables = {f"slug{i}": slug for i, slug in enumerate(chunk)}
        fields = []
        for i, slug in enumerate(chunk):
            fields.append(
                f"""
                q{i}: question(titleSlug: $slug{i}) {{
                    questionFrontendId
                    title
                    titleSlug
                    difficulty
                    topicTags {{
                        name
                    }}
                }}
                """
            )

        query_args = ", ".join(f"$slug{i}: String!" for i in range(len(chunk)))
        query = f"query problemData({query_args}) {{ {''.join(fields)} }}"
        payload = {"query": query, "variables": variables}

        request = urllib.request.Request(
            LEETCODE_GRAPHQL_URL,
            data=json.dumps(payload).encode(),
            headers=headers,
        )

        with urllib.request.urlopen(request, timeout=30) as response:
            data = json.load(response)

        for key, value in data.get("data", {}).items():
            if not value:
                continue
            metadata[value["titleSlug"]] = {
                "number": value["questionFrontendId"],
                "title": value["title"],
                "slug": value["titleSlug"],
                "difficulty": value["difficulty"],
                "tags": [tag["name"] for tag in value.get("topicTags", [])],
            }

    return metadata


def format_complexity(value: str | None) -> str:
    if not value:
        return "Manual Review"
    return value if value.startswith("_") else f"_{value}_"


def build_auto_rows(
    missing_slugs: list[str],
    solutions_by_slug: dict[str, dict[str, SolutionFile]],
    metadata_by_slug: dict[str, dict[str, object]],
) -> list[str]:
    rows = []

    def sort_key(slug: str) -> tuple[int, int | str]:
        metadata = metadata_by_slug.get(slug)
        if metadata and str(metadata["number"]).isdigit():
            return (0, int(str(metadata["number"])))
        return (1, slug)

    for slug in sorted(missing_slugs, key=sort_key):
        metadata = metadata_by_slug.get(slug, {})
        solutions = solutions_by_slug[slug]
        first_solution = next(iter(solutions.values()))

        number = str(metadata.get("number", infer_problem_number_from_stem(first_solution.path.stem)))
        title = str(metadata.get("title", humanize_stem(first_solution.path.stem)))
        difficulty = str(metadata.get("difficulty", "Manual Review"))
        tags = metadata.get("tags", [])
        tags_text = ", ".join(tags) if tags else "Manual Review"
        time_complexity = next((s.time_complexity for s in solutions.values() if s.time_complexity), None)
        space_complexity = next((s.space_complexity for s in solutions.values() if s.space_complexity), None)
        problem_link = f"https://leetcode.com/problems/{metadata.get('slug', slug)}/"
        solution_links = build_solution_cell(slug, solutions_by_slug) or "Manual Review"

        rows.append(
            "| "
            f"{number} | "
            f"[{title}]({problem_link}) | "
            f"{solution_links} | "
            f"{format_complexity(time_complexity)} | "
            f"{format_complexity(space_complexity)} | "
            f"{difficulty} | "
            f"{tags_text} |"
        )

    return rows


def build_auto_section(
    missing_slugs: list[str],
    solutions_by_slug: dict[str, dict[str, SolutionFile]],
    metadata_by_slug: dict[str, dict[str, object]],
) -> str:
    lines = [
        AUTO_START,
        "",
        "---",
        "",
        AUTO_SECTION_TITLE,
        "",
        "Problems in this section are picked up automatically from the `Cpp` and `Rust` folders when they are not yet listed in the curated sections above.",
        "Problem number, title, difficulty, and tags come from LeetCode. Time and space are read from source comments when available; otherwise they are marked for manual review.",
        "",
    ]

    if not missing_slugs:
        lines.append("All detected C++ and Rust solutions are already represented in the curated sections above.")
        lines.append("")
        lines.append(AUTO_END)
        return "\n".join(lines)

    lines.extend(
        [
            "| # | Problem | Solutions | Time | Space | Difficulty | Tags |",
            "| --- | --- | --- | --- | --- | --- | --- |",
        ]
    )
    lines.extend(build_auto_rows(missing_slugs, solutions_by_slug, metadata_by_slug))
    lines.extend(["", AUTO_END])
    return "\n".join(lines)


def upsert_auto_section(text: str, auto_section: str) -> str:
    pattern = re.compile(rf"{re.escape(AUTO_START)}.*?{re.escape(AUTO_END)}", re.DOTALL)
    if pattern.search(text):
        return pattern.sub(auto_section, text, count=1)

    marker = "\n## Contributing\n"
    if marker in text:
        return text.replace(marker, f"\n{auto_section}\n\n## Contributing\n", 1)

    return f"{text.rstrip()}\n\n{auto_section}\n"


def main() -> None:
    readme = README_PATH.read_text()
    solutions_by_slug = discover_solutions()
    readme = normalize_solution_links(readme)
    readme = update_problem_count_badge(readme, len(solutions_by_slug))
    readme = update_overview(readme)
    readme = update_existing_solution_cells(readme, solutions_by_slug)

    readme_slugs = extract_readme_problem_slugs(strip_auto_section(readme))
    missing_slugs = sorted(set(solutions_by_slug) - readme_slugs)
    metadata_by_slug = fetch_leetcode_metadata(missing_slugs)

    readme = upsert_auto_nav(readme)
    readme = upsert_auto_section(
        readme,
        build_auto_section(missing_slugs, solutions_by_slug, metadata_by_slug),
    )

    README_PATH.write_text(readme)


if __name__ == "__main__":
    main()
