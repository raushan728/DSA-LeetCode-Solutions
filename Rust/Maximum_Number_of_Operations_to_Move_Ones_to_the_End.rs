impl Solution {
    pub fn max_operations(s: String) -> i32 {
        let mut once = 0;
        let mut op = 0;
        let b = s.as_bytes();
        for i in 0..b.len() {
            if b[i] == b'1' {
                once += 1;
            } else if i > 0 && b[i - 1] != b'0' {
                op += once;
            }
        }
        op
    }
}
