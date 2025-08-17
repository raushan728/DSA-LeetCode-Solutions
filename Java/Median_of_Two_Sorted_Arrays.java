class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n1 = nums1.length, n2 = nums2.length;
        if (n1 > n2) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int low = 0, high = n1;
        int half = (n1 + n2 + 1) / 2;
        while (low <= high) {
            int i = (low + high) / 2;
            int j = half - i;
            int l1 = (i > 0) ? nums1[i - 1] : Integer.MIN_VALUE;
            int r1 = (i < n1) ? nums1[i] : Integer.MAX_VALUE;
            int l2 = (j > 0) ? nums2[j - 1] : Integer.MIN_VALUE;
            int r2 = (j < n2) ? nums2[j] : Integer.MAX_VALUE;
            if (l1 <= r2 && l2 <= r1) {
                if ((n1 + n2) % 2 == 0) {
                    return (Math.max(l1, l2) + Math.min(r1, r2)) / 2.0;
                } else {
                    return Math.max(l1, l2);
                }
            } else if (l1 > r2) {
                high = i - 1;
            } else {
                low = i + 1;
            }
        }
        return 0.0;
    }
}