impl Solution {
    pub fn rotate(nums: &mut Vec<i32>, k: i32) {
        let n = nums.len();
        if n == 0 {
            return;
        };
        let k = (k as usize) % n;
        nums.reverse();
        nums[0..k].reverse();
        nums[k..].reverse();
    }
}
