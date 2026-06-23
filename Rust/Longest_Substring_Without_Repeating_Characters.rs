use std::collections::HashMap;
impl Solution {
    pub fn length_of_longest_substring(s: String) -> i32 {
        let mut last = HashMap::new();
        let mut left = 0;
        let mut ans = 0;
        for (i, ch) in s.chars().enumerate() {
            if let Some(&prev) = last.get(&ch) {
                if prev >= left {
                    left = prev + 1;
                }
            }
            last.insert(ch, i);
            ans = ans.max(i - left + 1);
        }
        ans as i32
    }
}
