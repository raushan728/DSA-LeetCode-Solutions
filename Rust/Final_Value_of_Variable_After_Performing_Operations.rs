impl Solution {
    pub fn final_value_after_operations(operations: Vec<String>) -> i32 {
        operations.iter().fold(0, |ans, x| {
            if x.contains("++") { ans + 1 } else { ans - 1 }
        })
    }
}