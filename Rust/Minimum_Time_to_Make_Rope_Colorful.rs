impl Solution {
    pub fn min_cost(colors: String, needed_time: Vec<i32>) -> i32 {
        let mut total_time = 0;
        let mut max_time = needed_time[0];
        let colors: Vec<char> = colors.chars().collect();
        for i in 1..colors.len() {
            if colors[i] == colors[i - 1] {
                total_time += max_time.min(needed_time[i]);
                max_time = max_time.max(needed_time[i]);
            } else {
                max_time = needed_time[i];
            }
        }
        total_time
    }
}
