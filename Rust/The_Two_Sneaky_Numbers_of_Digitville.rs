impl Solution {
    pub fn get_sneaky_numbers(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len() - 2;
        let mut xor_all = 0;
        for &num in &nums {
            xor_all ^= num;
        }
        for i in 0..n {
            xor_all ^= i as i32;
        }
        let set_bit = xor_all & -xor_all;
        let mut x = 0;
        let mut y = 0;

        for &num in &nums {
            if num & set_bit != 0 {
                x ^= num;
            } else {
                y ^= num;
            }
        }

        for i in 0..n {
            let i32_val = i as i32;
            if i32_val & set_bit != 0 {
                x ^= i32_val;
            } else {
                y ^= i32_val;
            }
        }

        vec![x, y]
    }
}
