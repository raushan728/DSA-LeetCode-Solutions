impl Solution {
    pub fn next_beautiful_number(n: i32) -> i32 {
        let mut x = n + 1;
        loop {
            if Self::is_bal(x) {
                return x;
            }
            x += 1;
        }
    }
    fn is_bal(mut x: i32) -> bool {
        let mut freq = [0; 10];
        while x > 0 {
            freq[(x % 10) as usize] += 1;
            x /= 10;
        }
        for i in 0..=9 {
            if freq[i] > 0 && freq[i] != i as i32 {
                return false;
            }
        }
        true
    }
}
