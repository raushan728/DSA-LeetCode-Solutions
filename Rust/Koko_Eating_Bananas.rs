impl Solution {
    pub fn min_eating_speed(piles: Vec<i32>, h: i32) -> i32 {
        let mut low = 1;
        let mut high = *piles.iter().max().unwrap();
        let mut ans = high;

        while low <= high {
            let mid = low + (high - low) / 2;

            if Self::can_finish(&piles, mid, h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        ans
    }

    fn can_finish(piles: &Vec<i32>, k: i32, h: i32) -> bool {
        let mut hours: i64 = 0;

        for &p in piles {
            hours += (p as i64 + k as i64 - 1) / k as i64;
        }

        hours <= h as i64
    }
}
