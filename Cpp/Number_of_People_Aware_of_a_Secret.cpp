class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        const int MOD = 1e9 + 7;
        vector<long long> dp(n + 1, 0);
        dp[1] = 1;
        long long curr = 0;

        for (int i = 2; i <= n; i++) {
            if (i - delay >= 1) {
                curr = (curr + dp[i - delay]) % MOD;
            }
            if (i - forget >= 1) {
                curr = (curr - dp[i - forget] + MOD) % MOD;
            }
            dp[i] = curr;
        }
        long long ans = 0;
        for (int i = max(1, n - forget + 1); i <= n; i++) {
            ans = (ans + dp[i]) % MOD;
        }
        return ans;
    }
};
