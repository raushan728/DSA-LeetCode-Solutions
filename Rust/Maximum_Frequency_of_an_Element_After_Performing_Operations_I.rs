use std::cmp::min;

impl Solution {
    pub fn max_frequency(nums: Vec<i32>, k: i32, num_operations: i32) -> i32 {
        let mut nums = nums;
        nums.sort();
        let n = nums.len();
        let k64 = k as i64;
        let mut candidates = Vec::new();
        for &x in &nums {
            candidates.push(x);
            candidates.push(x - k);
            candidates.push(x + k);
        }
        candidates.sort();
        candidates.dedup();

        let mut ans = 0;
        for &t in &candidates {
            let t64 = t as i64;
            let left = t64 - k64;
            let right = t64 + k64;
            let lo = nums.partition_point(|&val| (val as i64) < left);
            let hi = nums.partition_point(|&val| (val as i64) <= right);
            let cover = (hi - lo) as i32;
            let base_lo = nums.partition_point(|&val| (val as i64) < t64);
            let base_hi = nums.partition_point(|&val| (val as i64) <= t64);
            let base = (base_hi - base_lo) as i32;
            let candidates_count = cover - base;
            let freq = base + min(candidates_count, num_operations);
            ans = ans.max(freq);
        }
        ans
    }
}
