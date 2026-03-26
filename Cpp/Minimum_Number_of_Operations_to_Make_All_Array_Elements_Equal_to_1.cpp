class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int once = count(nums.begin(), nums.end(), 1);
        if (once > 0)
            return n - once;
        int total_gcd = nums[0];
        for (int x : nums) {
            total_gcd = gcd(total_gcd, x);
        }
        if (total_gcd != 1)
            return -1;
        int min_len = INT_MAX;
        for (int i = 0; i < n && min_len > 1; i++) {
            int curr_gcd = nums[i];
            for (int j = i + 1; j < n; j++) {
                curr_gcd = gcd(curr_gcd, nums[j]);
                if (curr_gcd == 1) {
                    min_len = min(min_len, j - i);
                    break;
                }
            }
        }
        return min_len + (n - 1);
    }
};