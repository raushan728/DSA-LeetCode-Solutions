public class Solution {
    public int MaxSubArray(int[] nums) {
        int maxSoFar = nums[0];
        int currentMax = nums[0];
        
        for (int i = 1; i < nums.Length; i++) {
            currentMax = System.Math.Max(nums[i], currentMax + nums[i]);
            maxSoFar = System.Math.Max(maxSoFar, currentMax);
        }
        
        return maxSoFar;
    }
}