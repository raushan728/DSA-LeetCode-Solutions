impl Solution {
    pub fn missing_number(nums: Vec<i32>) -> i32 {
        let n = nums.len() as i32;
        let exSum = n * (n + 1) / 2;
        let acSum: i32 = nums.iter().sum();
        return exSum - acSum;
    }
}
