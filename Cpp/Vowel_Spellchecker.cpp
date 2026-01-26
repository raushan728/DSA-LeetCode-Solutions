class Solution {
public:
    string toLower(string s) {
        for (char& c : s) {
            c = tolower(c);
        }
        return s;
    }
    string removeVowels(string s) {
        s = toLower(s);
        for (char& c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = '*';
            }
        }
        return s;
    }
    vector<string> spellchecker(vector<string>& wordlist,
                                vector<string>& queries) {
        unordered_set<string> exact_set;
        unordered_map<string, string> cap_map;
        unordered_map<string, string> vowel_map;
        for (const string& word : wordlist) {
            exact_set.insert(word);
            string lw = toLower(word);
            if (cap_map.find(lw) == cap_map.end()) {
                cap_map[lw] = word;
            }
            string vw = removeVowels(word);
            if (vowel_map.find(vw) == vowel_map.end()) {
                vowel_map[vw] = word;
            }
        }
        vector<string> ans;
        for (const string& query : queries) {
            if (exact_set.count(query)) {
                ans.push_back(query);
                continue;
            }
            string lQuery = toLower(query);
            if (cap_map.count(lQuery)) {
                ans.push_back(cap_map[lQuery]);
                continue;
            }
            string voweledQuery = removeVowels(query);
            if (vowel_map.count(voweledQuery)) {
                ans.push_back(vowel_map[voweledQuery]);
                continue;
            }
            ans.push_back("");
        }
        return ans;
    }
};