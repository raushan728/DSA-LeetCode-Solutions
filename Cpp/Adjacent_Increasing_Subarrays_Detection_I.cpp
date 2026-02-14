class Solution {
public:
bool isIncreasing(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; i++) {
            if (nums[i] >= nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) return n >= 2;
        for (int i = 0; i <= n - 2 * k; i++) {
            if (isIncreasing(nums, i, i + k - 1) && isIncreasing(nums, i + k, i + 2 * k - 1)) {
                return true;
            }
        }
        
        return false;
    }
};