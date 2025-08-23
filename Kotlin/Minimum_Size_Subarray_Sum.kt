class Solution {
    fun minSubArrayLen(target: Int, nums: IntArray): Int {
        var left = 0
        var sum = 0
        var minLength = Int.MAX_VALUE
        
        for (i in nums.indices) {
            sum += nums[i]
            while (sum >= target) {
                minLength = minOf(minLength, i - left + 1)
                sum -= nums[left]
                left++
            }
        }
        return if (minLength == Int.MAX_VALUE) 0 else minLength
    }
}
