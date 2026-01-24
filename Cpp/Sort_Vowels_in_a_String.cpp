class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string sortVowels(string s) {
        vector<char> vowels;
        for (char c : s) {
            if (isVowel(c)) {
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(), vowels.end());
        int idx = 0;
        for (char& c : s) {
            if (isVowel(c)) {
                c = vowels[idx++];
            }
        }
        return s;
    }
};