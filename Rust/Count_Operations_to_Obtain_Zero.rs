impl Solution {
    pub fn count_operations(mut num1: i32, mut num2: i32) -> i32 {
        let mut cnt = 0;
        while num1 != 0 && num2 != 0 {
            let (a, b) = if num1 > num2 {
                (&mut num1, &mut num2)
            } else {
                (&mut num2, &mut num1)
            };
            cnt += *a / *b;
            *a %= *b;
        }
        cnt
    }
}
