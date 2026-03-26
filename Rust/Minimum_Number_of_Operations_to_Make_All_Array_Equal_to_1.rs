//Time complexity: O(n² × log M)
//space complexity: O(log M)

impl Solution {
    pub fn min_operations(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        let once = nums.iter().filter(|&&x| x == 1).count();
        if once > 0 {
            return (n - once) as i32;
        }
        let total_gcd = nums.iter().fold(nums[0], |acc, &x| Self::gcd(acc, x));
        if total_gcd != 1 {
            return -1;
        }
        let mut min_len = i32::MAX;
        for i in 0..n {
            if min_len == 1 {
                break;
            }
            let mut curr_gcd = nums[i];
            for j in (i + 1)..n {
                curr_gcd = Self::gcd(curr_gcd, nums[j]);
                if curr_gcd == 1 {
                    min_len = min_len.min((j - i) as i32);
                    break;
                }
            }
        }
        min_len + (n as i32 - 1)
    }
    fn gcd(n1: i32, n2: i32) -> i32 {
        if n2 == 0 {
            n1
        } else {
            Self::gcd(n2, n1 % n2)
        }
    }
}
