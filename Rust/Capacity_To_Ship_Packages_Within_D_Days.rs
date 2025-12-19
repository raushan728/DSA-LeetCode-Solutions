impl Solution {
    fn is_possible(weights: &Vec<i32>, d: i32, capacity: i32) -> bool {
        let mut days_needed = 1;
        let mut current_weight = 0;

        for &weight in weights {
            if current_weight + weight <= capacity {
                current_weight += weight;
            } else {
                days_needed += 1;
                current_weight = weight;
            }
        }
        days_needed <= d
    }

    pub fn ship_within_days(weights: Vec<i32>, d: i32) -> i32 {
        let mut low = *weights.iter().max().unwrap_or(&0);
        let mut high: i32 = weights.iter().sum();
        let mut ans = high;
        while low <= high {
            let mid_capacity = low + (high - low) / 2;
            
            if Self::is_possible(&weights, d, mid_capacity) {
                ans = mid_capacity;
                high = mid_capacity - 1;
            } else {
                low = mid_capacity + 1;
            }
        }
        ans
    }
}