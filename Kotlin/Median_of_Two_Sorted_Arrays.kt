class Solution {
    fun findMedianSortedArrays(nums1: IntArray, nums2: IntArray): Double {
        val n1 = nums1.size
        val n2 = nums2.size
        
        if (n1 > n2) {
            return findMedianSortedArrays(nums2, nums1)
        }
        
        val half = (n1 + n2 + 1) / 2
        var low = 0
        var high = n1
        
        while (low <= high) {
            val i = (low + high) / 2
            val j = half - i
            
            val left1 = if (i > 0) nums1[i - 1] else Int.MIN_VALUE
            val right1 = if (i < n1) nums1[i] else Int.MAX_VALUE
            val left2 = if (j > 0) nums2[j - 1] else Int.MIN_VALUE
            val right2 = if (j < n2) nums2[j] else Int.MAX_VALUE
            
            if (left1 <= right2 && left2 <= right1) {
                return if ((n1 + n2) % 2 == 0) {
                    (maxOf(left1, left2).toDouble() + minOf(right1, right2).toDouble()) / 2.0
                } else {
                    maxOf(left1, left2).toDouble()
                }
            } else if (left1 > right2) {
                high = i - 1
            } else {
                low = i + 1
            }
        }
        return 0.0
    }
}
