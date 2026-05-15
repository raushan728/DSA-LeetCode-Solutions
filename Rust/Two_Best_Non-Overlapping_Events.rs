// time complexity: O(n log n)
// space complexity: O(1)

impl Solution {
    pub fn max_two_events(mut events: Vec<Vec<i32>>) -> i32 {
        events.sort();
        let n = events.len();
        let mut suffix = vec![0; n];
        suffix[n - 1] = events[n - 1][2];
        for i in (0..n - 1).rev() {
            suffix[i] = suffix[i + 1].max(events[i][2]);
        }

        let mut ans = 0;
        for i in 0..n {
            let mut end_time = events[i][1];
            let mut value = events[i][2];

            ans = ans.max(value);

            let mut low = i + 1;
            let mut high = n - 1;
            let mut next_idx = n;

            while low <= high {
                let mut mid = low + (high - low) / 2;
                if events[mid][0] > end_time {
                    next_idx = mid;
                    if mid == 0 {
                        break;
                    }
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            if next_idx < n {
                ans = ans.max(value + suffix[next_idx]);
            }
        }
        ans
    }
}
