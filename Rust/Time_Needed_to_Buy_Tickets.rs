impl Solution {
    pub fn time_required_to_buy(tickets: Vec<i32>, k: i32) -> i32 {
        let mut time = 0;
        let k = k as usize;
        for i in 0..tickets.len() {
            if i <= k {
                time += tickets[i].min(tickets[k]);
            } else {
                time += tickets[i].min(tickets[k] - 1);
            }
        }
        time
    }
}
