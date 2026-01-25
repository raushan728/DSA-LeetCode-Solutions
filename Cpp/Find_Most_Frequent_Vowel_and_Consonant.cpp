class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxFreqSum(string s) {
        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;
        char bestV = 0;
        int maxV = 0;

        char bestC = 0;
        int maxC = 0;
        for (int i = 0; i < 26; i++) {
            char currChar = 'a' + i;
            int count = freq[i];

            if (count == 0)
                continue;

            if (isVowel(currChar)) {
                if (count > maxV) {
                    maxV = count;
                    bestV = currChar;
                }
            } else {
                if (count > maxC) {
                    maxC = count;
                    bestC = currChar;
                }
            }
        }
        return maxV + maxC;
    }
};