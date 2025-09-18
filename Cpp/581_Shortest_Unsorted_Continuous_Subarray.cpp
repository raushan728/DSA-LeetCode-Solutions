class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end && nums[st] <= nums[st + 1]) {
            st++;
        }
        if (st == nums.size() - 1) {
            return 0;
        }
        while (end > 0 && nums[end] >= nums[end - 1]) {
            end--;
        }
        int submin = *min_element(nums.begin() + st, nums.begin() + end + 1);
        int submax = *max_element(nums.begin() + st, nums.begin() + end + 1);
        while (st > 0 && nums[st - 1] > submin) {
            st--;
        }
        while (end < nums.size() - 1 && nums[end + 1] < submax) {
            end++;
        }
        return end - st + 1;
    }
};