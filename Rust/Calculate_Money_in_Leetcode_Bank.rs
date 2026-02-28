impl Solution {
    pub fn total_money(n: i32) -> i32 {
        let weeks = n / 7;
        let rem = n % 7;
        let total = 7 * weeks * (weeks + 1) / 2 + 21 * weeks;
        let remaining = rem * (weeks + 1) + rem * (rem - 1) / 2;
        total + remaining
    }
}
