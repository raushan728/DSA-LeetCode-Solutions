use std::collections::HashMap;
impl Solution {
    pub fn find_x_sum(nums: Vec<i32>, k: i32, x: i32) -> Vec<i32> {
        let k = k as usize;
        let x = x as usize;
        let n = nums.len();
        let mut ans = Vec::new();
        for i in 0..=n - k {
            let mut freq = HashMap::new();
            for j in i..i + k {
                *freq.entry(nums[j]).or_insert(0) += 1;
            }
            let mut v: Vec<(i32, i32)> = freq.into_iter().collect();
            v.sort_by(|a, b| {
                if a.1 == b.1 {
                    b.0.cmp(&a.0)
                } else {
                    b.1.cmp(&a.1)
                }
            });
            let mut sum = 0;
            for j in 0..x.min(v.len()) {
                sum += v[j].0 * v[j].1;
            }
            ans.push(sum);
        }
        ans
    }
}
