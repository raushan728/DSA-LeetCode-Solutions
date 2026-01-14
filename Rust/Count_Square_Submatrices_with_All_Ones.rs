impl Solution {
    pub fn count_squares(matrix: Vec<Vec<i32>>) -> i32 {
        let n = matrix.len();
        let m = matrix[0].len();

        let mut dp = vec![vec![0; m]; n];
        let mut ans = 0;

        for i in 0..n {
            for j in 0..m {
                if matrix[i][j] == 1 {
                    if i == 0 || j == 0 {
                        dp[i][j] = 1;
                    } else {
                        let min_val = dp[i - 1][j]
                            .min(dp[i][j - 1])
                            .min(dp[i - 1][j - 1]);
                        dp[i][j] = 1 + min_val;
                    }
                }
                ans += dp[i][j];
            }
        }

        ans
    }
}
