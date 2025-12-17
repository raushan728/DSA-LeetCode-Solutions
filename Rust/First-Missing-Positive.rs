impl Solution {
    pub fn first_missing_positive(mut nums: Vec<i32>) -> i32 {
        let n = nums.len();
        for i in 0..n {
            while nums[i] > 0 && (nums[i] as usize) <= n {
                let idx = (nums[i] - 1) as usize;
                if nums[i] == nums[idx] {
                    break;
                }
                nums.swap(i, idx);
            }
        }
        for i in 0..n {
            if nums[i] != (i as i32) + 1 {
                return (i as i32) + 1;
            }
        }
        return (n as i32) + 1;
    }
}
