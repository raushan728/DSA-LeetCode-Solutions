class Solution {
    public:
        string minWindow(string s, string t) {
            if (s.size() < t.size()) {
                return "";
            }
            vector<int> need(128, 0);
            for (char c : t) {
                need[c]++;
            }
            int req = (int)t.size();
            int left = 0, right = 0;
            int bestLen = INT_MAX, bestStart = 0;
            while (right < (int)s.size()) {
                char c = s[right];
                if (need[c] > 0) {
                    req--;
                }
                need[c]--;
                right++;
                while (req == 0) {
                    if (right - left < bestLen) {
                        bestLen = right - left, bestStart = left;
                    }
                    char lc = s[left];
                    need[lc]++;
                    if (need[lc] > 0) {
                        req++;
                    }
                    left++;
                }
            }
            return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
        }
    };