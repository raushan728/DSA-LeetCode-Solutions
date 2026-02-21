use std::collections::{HashSet , VecDeque};
impl Solution {
    pub fn find_lex_smallest_string(s: String, a: i32, b: i32) -> String {
        let mut done = HashSet::new();
        let mut q = VecDeque::new();
        done.insert(s.clone());
        q.push_back(s.clone());
        let mut ans = s;
        while let Some(curr) = q.pop_front(){
            if curr < ans{
                ans = curr.clone();
            }
            let mut chars: Vec<char> = curr.chars().collect();
            for i in (1..chars.len()).step_by(2){
            let digit = chars[i].to_digit(10).unwrap() as i32;
            let new_d = ((digit + a ) % 10) as u32;
            chars[i] = std::char::from_digit(new_d, 10).unwrap();
            }
            let added:String = chars.iter().collect();
            if done.insert(added.clone()){
                q.push_back(added);
            }
            let n = curr.len();
            let b = b as usize;
            let rotated = format!{
                "{}{}",
                &curr[n - b..],
                &curr[..n - b]
            };
            if done.insert(rotated.clone()){
                q.push_back(rotated);
            }
        }
        ans
    }
}