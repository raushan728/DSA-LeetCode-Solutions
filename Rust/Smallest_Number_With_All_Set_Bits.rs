impl Solution {
    pub fn smallest_number(n: i32) -> i32 {
        let mut k = 0;
        loop {
            let x = (1 << k) - 1;
            if x >= n {
                return x;
            }
            k += 1;
        }
    }
}
