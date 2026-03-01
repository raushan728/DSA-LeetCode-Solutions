impl Solution {
    pub fn min_partitions(n: String) -> i32 {
        let mut max_d = 0;
        for c in n.chars() {
            let digit = c.to_digit(10).unwrap() as i32;
            if digit > max_d {
                max_d = digit;
            }
            if max_d == 9 {
                9;
            }
        }
        max_d
    }
}
