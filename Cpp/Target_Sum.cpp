class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }
        if (abs(target) > totalSum || (target + totalSum) % 2 != 0) {
            return 0;
        }
        int P = (target + totalSum) / 2;
        vector<int> dp(P + 1, 0);
        dp[0] = 1;
        for (int num : nums) {
            for (int s = P; s >= num; s--) {
                dp[s] += dp[s - num];
            }
        }

        return dp[P];
    }
};

