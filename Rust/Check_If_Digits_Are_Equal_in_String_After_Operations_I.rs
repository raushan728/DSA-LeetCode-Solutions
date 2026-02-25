impl Solution {
    pub fn has_same_digits(s: String) -> bool {
        let mut digits: Vec<u32> = s.chars().map(|c|c.to_digit(10).unwrap()).collect();
        let mut len = digits.len();
        while len > 2{
            for i in 0..len - 1{
                digits[i] = (digits[i] + digits[i+1]) %10;
            }
            len -= 1;
        }
        digits[0] == digits[1]
    }
}