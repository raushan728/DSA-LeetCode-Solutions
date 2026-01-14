class Solution {
public:
    int countSquares(vector<vector<int>>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums[0].size(), 0));
        long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[0].size(); j++) {
                if (nums[i][j] == 1) {
                    if (i == 0 || j == 0) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j],
                                            dp[i][j - 1]});
                    }
                }
                ans += dp[i][j];
            }
        }
        return ans;
    }
};
