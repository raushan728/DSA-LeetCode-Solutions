class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val set = HashSet<Int>()
        for (num in nums) {
            if (num in set) {
                return true
            }
            set.add(num)
        }
        return false
    }
}
