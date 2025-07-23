class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int start = 0;
        int n = nums.length;
        int end = n - 1;
        while (start < n - 1 && nums[start] <= nums[start + 1]) {
            start++;
        }
        if (start == end) {
            return 0;
        }
        while (end > 0 && nums[end] >= nums[end - 1]) {
            end--;
        }
        int submin = nums[start], submax = nums[start];
        for (int i = start; i <= end; i++) {
            submin = Math.min(submin, nums[i]);
            submax = Math.max(submax, nums[i]);
        }
        while (start > 0 && nums[start - 1] > submin) {
            start--;
        }
        while (end < n - 1 && nums[end + 1] < submax) {
            end++;
        }
        return end - start + 1;
    }
}