impl Solution {
    pub fn split_array(nums: Vec<i32>, k: i32) -> i32 {
        let mut low: i64 = *nums.iter().max().unwrap() as i64;
        let mut high: i64 = nums.iter().map(|&x| x as i64).sum();
        let mut ans = high;
        while low <= high {
            let mid = low + (high - low) / 2;

            if Self::count_partitions(&nums, mid) > k {
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }

        ans as i32
    }
    fn count_partitions(nums: &Vec<i32>, max_allowed: i64) -> i32 {
        let mut partitions = 1;
        let mut current_sum = 0;

        for &num in nums {
            if current_sum + (num as i64) <= max_allowed {
                current_sum += num as i64;
            } else {
                partitions += 1;
                current_sum = num as i64;
            }
        }
        partitions
    }
}
