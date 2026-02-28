impl Solution {
    pub fn number_of_beams(bank: Vec<String>) -> i32 {
        let mut prev = 0;
        let mut ans = 0;
        for row in bank {
            let cur = row.chars().filter(|&c| c == '1').count() as i32;
            if cur > 0 {
                ans += prev * cur;
                prev = cur;
            }
        }
        ans
    }
}
