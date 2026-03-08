impl Solution {
    pub fn min_number_operations(target: Vec<i32>) -> i32 {
        let mut op = target[0];
        for i in 1..target.len() {
            if target[i] > target[i - 1] {
                op += target[i] - target[i - 1];
            }
        }
        op
    }
}
