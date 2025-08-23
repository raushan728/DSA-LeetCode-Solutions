class Solution {
    fun findUnsortedSubarray(nums: IntArray): Int {
        val n = nums.size
        var start = 0
        var end = n - 1
        
        while (start < n - 1 && nums[start] <= nums[start + 1]) {
            start++
        }
        if (start == n - 1) return 0
        
        while (end > 0 && nums[end] >= nums[end - 1]) {
            end--
        }
        
        val subMin = nums.slice(start..end).minOrNull()!!
        val subMax = nums.slice(start..end).maxOrNull()!!
        
        while (start > 0 && nums[start - 1] > subMin) {
            start--
        }
        while (end < n - 1 && nums[end + 1] < subMax) {
            end++
        }
        
        return end - start + 1
    }
}
