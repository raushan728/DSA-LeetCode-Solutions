class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int last = INT_MIN;
        for (int n : nums) {
            int min_allowed = n - k;
            int max_allowed = n + k;
            int assign = max(min_allowed, last + 1);
            if (assign <= max_allowed) {
                last = assign;
                cnt++;
            }
        }
        return cnt;
    }
};