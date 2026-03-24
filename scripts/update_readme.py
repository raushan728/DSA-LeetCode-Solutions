#!/usr/bin/env python3
from __future__ import annotations

import re
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
README_PATH = ROOT / "README.md"
CPP_DIR = ROOT / "Cpp"

AUTO_START = "<!-- AUTO-SYNCED-PROBLEMS-START -->"
AUTO_END = "<!-- AUTO-SYNCED-PROBLEMS-END -->"
AUTO_NAV = "- [Auto-Synced Problems](#auto-synced-problems)"
AUTO_SECTION_TITLE = "### Auto-Synced Problems"


def normalize_solution_links(text: str) -> str:
    return re.sub(r"\(<\./(Cpp/[^>]+\.cpp)>\)", r"(./\1)", text)


def update_problem_count_badge(text: str, count: int) -> str:
    return re.sub(
        r"Problems%20Solved-\d+-success",
        f"Problems%20Solved-{count}-success",
        text,
        count=1,
    )


def normalize_whitespace(value: str) -> str:
    return re.sub(r"\s+", " ", value).strip()


def humanize_filename(path: Path) -> str:
    stem = re.sub(r"^\d+[_ -]*", "", path.stem)
    stem = stem.replace("_", " ").replace("-", " ")
    return normalize_whitespace(stem)


def infer_problem_number(path: Path) -> str:
    match = re.match(r"^(\d+)", path.stem)
    return match.group(1) if match else "-"


def infer_title_slug(path: Path) -> str:
    stem = re.sub(r"^\d+[_ -]*", "", path.stem)
    slug = []
    previous_dash = False

    for ch in stem.lower():
        if ch.isalnum():
            slug.append(ch)
            previous_dash = False
        elif ch in {" ", "_", "-"}:
            if not previous_dash:
                slug.append("-")
                previous_dash = True

    return "".join(slug).strip("-")


def extract_cpp_paths(text: str) -> set[str]:
    return set(re.findall(r"\(\./(Cpp/.*?\.cpp)\)", text))


def sort_key(path: Path) -> tuple[int, int | str]:
    number = infer_problem_number(path)
    if number != "-":
        return (0, int(number))
    return (1, humanize_filename(path).lower())


def build_auto_section(missing_files: list[Path]) -> str:
    lines = [
        AUTO_START,
        "",
        "---",
        "",
        AUTO_SECTION_TITLE,
        "",
        "Problems in this section are picked up automatically from the `Cpp` folder when they are not yet listed in the curated sections above.",
        "",
    ]

    if not missing_files:
        lines.append("All C++ solutions are already listed in the curated sections above.")
        lines.append("")
        lines.append(AUTO_END)
        return "\n".join(lines)

    lines.extend(
        [
            "| # | Problem | Solutions | Time | Space | Difficulty | Tags |",
            "| --- | --- | --- | --- | --- | --- | --- |",
        ]
    )

    for path in missing_files:
        title = humanize_filename(path)
        slug = infer_title_slug(path)
        number = infer_problem_number(path)
        url = f"https://leetcode.com/problems/{slug}/" if slug else "https://leetcode.com/problemset/"
        lines.append(
            f"| {number} | [{title}]({url}) | [C++](./Cpp/{path.name}) | TBD | TBD | TBD | TBD |"
        )

    lines.extend(["", AUTO_END])
    return "\n".join(lines)


def upsert_auto_nav(text: str) -> str:
    if AUTO_NAV in text:
        return text

    marker = "- [Greedy Problems](#greedy-problems)"
    if marker in text:
        return text.replace(marker, f"{marker}\n{AUTO_NAV}", 1)
    return text


def upsert_auto_section(text: str, auto_section: str) -> str:
    pattern = re.compile(
        rf"{re.escape(AUTO_START)}.*?{re.escape(AUTO_END)}",
        re.DOTALL,
    )
    if pattern.search(text):
        return pattern.sub(auto_section, text, count=1)

    marker = "\n## Contributing\n"
    if marker in text:
        return text.replace(marker, f"\n{auto_section}\n\n## Contributing\n", 1)

    return f"{text.rstrip()}\n\n{auto_section}\n"


def main() -> None:
    readme = README_PATH.read_text()
    cpp_files = sorted(CPP_DIR.glob("*.cpp"), key=sort_key)

    readme = normalize_solution_links(readme)
    readme = update_problem_count_badge(readme, len(cpp_files))

    listed_paths = extract_cpp_paths(readme)
    missing_files = [path for path in cpp_files if f"Cpp/{path.name}" not in listed_paths]

    readme = upsert_auto_nav(readme)
    readme = upsert_auto_section(readme, build_auto_section(missing_files))

    README_PATH.write_text(readme)


if __name__ == "__main__":
    main()
