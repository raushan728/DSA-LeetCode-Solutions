class Solution {
public:
    int magicalSum(int m, int k, vector<int>& nums) {
        int n = nums.size();
        long long MOD = 1e9 + 7;
        vector<long long> fact(m + 1, 1);
        vector<long long> inv_fact(m + 1, 1);

        auto power = [&](long long base, long long exp) {
            long long res = 1;
            base %= MOD;
            while (exp > 0) {
                if (exp % 2 == 1)
                    res = (res * base) % MOD;
                base = (base * base) % MOD;
                exp /= 2;
            }
            return res;
        };

        for (int i = 1; i <= m; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }
        inv_fact[m] = power(fact[m], MOD - 2);
        for (int i = m - 1; i >= 0; i--) {
            inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
        }
        vector<vector<vector<long long>>> dp(
            32, vector<vector<long long>>(m + 1, vector<long long>(k + 1, 0)));
        dp[0][0][0] = 1;

        for (int j = 0; j < n + 6; j++) {
            vector<vector<vector<long long>>> next_dp(
                32,
                vector<vector<long long>>(m + 1, vector<long long>(k + 1, 0)));
            int max_c_val = (j < n) ? m : 0;

            for (int carry = 0; carry <= 30; carry++) {
                for (int E = 0; E <= m; E++) {
                    for (int B = 0; B <= k; B++) {
                        if (dp[carry][E][B] == 0)
                            continue;
                        long long val = dp[carry][E][B];

                        int max_c = min(max_c_val, m - E);
                        long long p_nums_j = 1;

                        for (int c = 0; c <= max_c; c++) {
                            int v = c + carry;
                            int bit = v % 2;
                            int new_B = B + bit;
                            if (new_B > k) {
                                if (j < n)
                                    p_nums_j = (p_nums_j * nums[j]) % MOD;
                                continue;
                            }

                            int new_carry = v / 2;
                            int new_E = E + c;

                            long long term = (val * p_nums_j) % MOD;
                            term = (term * inv_fact[c]) % MOD;

                            next_dp[new_carry][new_E][new_B] =
                                (next_dp[new_carry][new_E][new_B] + term) % MOD;
                            if (j < n) {
                                p_nums_j = (p_nums_j * nums[j]) % MOD;
                            }
                        }
                    }
                }
            }
            dp = next_dp;
        }
        long long ans = dp[0][m][k];
        ans = (ans * fact[m]) % MOD;

        return ans;
    }
};