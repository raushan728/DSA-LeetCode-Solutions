class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if (n1 > n2)
            return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = n1, half = (n1 + n2 + 1) / 2;
        while (low <= high) {
            int i = (low + high) / 2;
            int j = half - i;
            int l1 = (i > 0) ? nums1[i - 1] : INT_MIN;
            int l2 = (j > 0) ? nums2[j - 1] : INT_MIN;
            int r1 = (i < n1) ? nums1[i] : INT_MAX;
            int r2 = (j < n2) ? nums2[j] : INT_MAX;
            if (l1 <= r2 && l2 <= r1) {
                return ((n1 + n2) % 2 == 0) ? (max(l1, l2) + min(r1, r2)) / 2.0
                                            : max(l1, l2);
            } else if (l1 > r2)
                high = i - 1;
            else
                low = i + 1;
        }
        return 0.0;
    }
};