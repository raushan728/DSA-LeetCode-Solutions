class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long k64 = k;
        vector<long long> candidates;
        for (int x : nums) {
            candidates.push_back(x);
            candidates.push_back(x - k);
            candidates.push_back(x + k);
        }
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()),
                         candidates.end());

        int ans = 0;
        for (long long t : candidates) {
            long long left = t - k64;
            long long right = t + k64;
            int lo = lower_bound(nums.begin(), nums.end(), left) - nums.begin();
            int hi =
                upper_bound(nums.begin(), nums.end(), right) - nums.begin();
            int cover = hi - lo;
            int base_lo =
                lower_bound(nums.begin(), nums.end(), t) - nums.begin();
            int base_hi =
                upper_bound(nums.begin(), nums.end(), t) - nums.begin();
            int base = base_hi - base_lo;
            int candidates_count = cover - base;
            int freq = base + min(candidates_count, numOperations);
            ans = max(ans, freq);
        }
        return ans;
    }
};
