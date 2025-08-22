func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
    if len(nums1) > len(nums2) {
        nums1, nums2 = nums2, nums1
    }
    
    m, n := len(nums1), len(nums2)
    low, high := 0, m
    
    for low <= high {
        partition1 := (low + high) / 2
        partition2 := (m+n+1)/2 - partition1
        
        maxLeft1 := -1 << 31
        if partition1 > 0 {
            maxLeft1 = nums1[partition1-1]
        }
        
        minRight1 := 1 << 31 - 1
        if partition1 < m {
            minRight1 = nums1[partition1]
        }
        
        maxLeft2 := -1 << 31
        if partition2 > 0 {
            maxLeft2 = nums2[partition2-1]
        }
        
        minRight2 := 1 << 31 - 1
        if partition2 < n {
            minRight2 = nums2[partition2]
        }
        
        if maxLeft1 <= minRight2 && maxLeft2 <= minRight1 {
            if (m+n)%2 == 0 {
                return float64(max(maxLeft1, maxLeft2)+min(minRight1, minRight2)) / 2.0
            } else {
                return float64(max(maxLeft1, maxLeft2))
            }
        } else if maxLeft1 > minRight2 {
            high = partition1 - 1
        } else {
            low = partition1 + 1
        }
    }
    return 0.0
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}
