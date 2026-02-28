impl Solution {
    pub fn max_distinct_elements(mut nums: Vec<i32>, k: i32) -> i32 {
        nums.sort_unstable();
        let mut cnt = 0;
        let mut last = i64::MIN;
        let k64 = k as i64;
        for &n in nums.iter() {
            let num = n as i64;
            let min_allowed = num - k64;
            let max_allowed = num + k64;
            let assign = std::cmp::max(min_allowed, last + 1);
            if assign <= max_allowed {
                last = assign;
                cnt += 1;
            }
        }
        cnt
    }
}
