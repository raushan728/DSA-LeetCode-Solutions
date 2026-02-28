class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int ans = 0;

        for (const string& row : bank) {
            int cur = 0;
            for (char c : row) {
                if (c == '1')
                    cur++;
            }
            if (cur > 0) {
                ans += prev * cur;
                prev = cur;
            }
        }

        return ans;
    }
};