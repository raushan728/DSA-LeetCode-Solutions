class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        map<int, int> counts;
        for (int p : power) {
            counts[p]++;
        }
        vector<int> unique_powers;
        for (auto const& [val, count] : counts) {
            unique_powers.push_back(val);
        }

        int n = unique_powers.size();
        vector<long long> dp(n, 0);

        for (int i = 0; i < n; i++) {
            int currentVal = unique_powers[i];
            long long currentDamage = (long long)currentVal * counts[currentVal];
            long long skip = (i > 0) ? dp[i - 1] : 0;
            
            long long take = currentDamage;
            auto it = lower_bound(unique_powers.begin(), unique_powers.end(), currentVal - 2);
            int idx = (it - unique_powers.begin()) - 1;
            
            if (idx >= 0) {
                take += dp[idx];
            }

            dp[i] = max(skip, take);
        }

        return dp[n - 1];
    }
};