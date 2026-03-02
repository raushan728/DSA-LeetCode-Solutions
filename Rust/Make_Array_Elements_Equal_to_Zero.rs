impl Solution {
    fn simulate(mut nums: Vec<i32>, start: i32, mut dir: i32) -> bool {
        let n = nums.len() as i32;
        let mut curr = start;

        while curr >= 0 && curr < n {
            let idx = curr as usize;

            if nums[idx] == 0 {
                curr += dir;
            } else {
                nums[idx] -= 1;
                dir = -dir;
                curr += dir;
            }
        }
        nums.iter().all(|&x| x == 0)
    }
    pub fn count_valid_selections(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        let mut count = 0;

        for i in 0..n {
            if nums[i] == 0 {
                if Self::simulate(nums.clone(), i as i32, -1) {
                    count += 1;
                }
                if Self::simulate(nums.clone(), i as i32, 1) {
                    count += 1;
                }
            }
        }

        count
    }
}
