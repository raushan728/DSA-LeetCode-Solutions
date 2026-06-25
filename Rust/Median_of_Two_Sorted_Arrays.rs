impl Solution {
    pub fn find_median_sorted_arrays(nums1: Vec<i32>, nums2: Vec<i32>) -> f64 {
        let (nums1, nums2) = if nums1.len() > nums2.len() {
            (nums2, nums1)
        } else {
            (nums1, nums2)
        };
        
        let (n1, n2) = (nums1.len() as i32, nums2.len() as i32);
        let half = (n1 + n2 + 1) / 2;
        let (mut low, mut high) = (0, n1);
        
        while low <= high {
            let i = (low + high) / 2;
            let j = half - i;
            
            let l1 = if i > 0 { nums1[(i - 1) as usize] } else { i32::MIN };
            let l2 = if j > 0 { nums2[(j - 1) as usize] } else { i32::MIN };
            let r1 = if i < n1 { nums1[i as usize] } else { i32::MAX };
            let r2 = if j < n2 { nums2[j as usize] } else { i32::MAX };
            
            if l1 <= r2 && l2 <= r1 {
                return if (n1 + n2) % 2 == 0 {
                    (l1.max(l2) as f64 + r1.min(r2) as f64) / 2.0
                } else {
                    l1.max(l2) as f64
                };
            } else if l1 > r2 {
                high = i - 1;
            } else {
                low = i + 1;
            }
        }
        
        0.0
    }
}

