// Time Complexity: O(n)
// Space Complexity: O(n)

impl Solution {
    pub fn min_operations(nums: Vec<i32>) -> i32 {
        let mut stack: Vec<i32> = Vec::new();
        let mut op = 0;
        for num in nums {
            if num == 0 {
                stack.clear();
                continue;
            }
            while stack.last().is_some_and(|&top| top > num) {
                stack.pop();
            }
            if stack.last().map_or(true, |&top| top < num) {
                stack.push(num);
                op += 1;
            }
        }
        op
    }
}
