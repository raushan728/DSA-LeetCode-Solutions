class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size())
            return "";
        vector<int> count(128, 0);
        for (char c : t)
            count[c]++;
        int req = (int)t.size();
        int left = 0, right = 0;
        int bestLen = INT_MAX, bestStart = 0;
        while (right < (int)s.size()) {
            char c = s[right];
            if (count[c] > 0)
                req--;
            count[c]--;
            right++;
            while (req == 0) {
                if (right - left < bestLen)
                    bestLen = right - left, bestStart = left;
                char lc = s[left];
                count[lc]++;
                if (count[lc] > 0)
                    req++;
                left++;
            }
        }
        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};