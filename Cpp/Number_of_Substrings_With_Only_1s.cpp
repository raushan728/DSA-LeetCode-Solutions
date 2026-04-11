class Solution {
public:
    int numSub(string s) {
        int mod = 1e9 + 7;
        long cnt = 0;
        int curr = 0;
        for (char c : s) {
            if (c == '1') {
                curr += 1;
                cnt += curr;
            } else
                curr = 0;
        }
        return cnt % mod;
    }
};