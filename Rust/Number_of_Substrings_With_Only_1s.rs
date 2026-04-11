// time complexity: O(n)
// space complexity: O(1)

impl Solution {
    pub fn num_sub(s: String) -> i32 {
        const MOD: i64 = 1000000007;
        let mut cnt: i64 = 0;
        let mut curr = 0;
        for c in s.chars() {
            if c == '1' {
                curr += 1;
                cnt += curr;
            } else {
                curr = 0;
            }
        }
        (cnt % MOD).try_into().unwrap()
    }
}
