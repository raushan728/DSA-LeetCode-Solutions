public class Solution {
    public int MinSubArrayLen(int target, int[] nums) {
        int minLength = int.MaxValue;
        int currentSum = 0;
        int left = 0;
        
        for (int right = 0; right < nums.Length; right++) {
            currentSum += nums[right];
            
            while (currentSum >= target) {
                minLength = System.Math.Min(minLength, right - left + 1);
                currentSum -= nums[left];
                left++;
            }
        }
        
        return minLength == int.MaxValue ? 0 : minLength;
    }
}