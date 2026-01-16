class Solution {
public:
    int n, m;
    vector<vector<int>> g;
    int area(int r1, int c1, int r2, int c2) {
        int minr = n, maxr = -1, minc = m, maxc = -1;
        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) {
                if (g[i][j] == 1) {
                    minr = min(minr, i);
                    maxr = max(maxr, i);
                    minc = min(minc, j);
                    maxc = max(maxc, j);
                }
            }
        }
        if (maxr == -1)
            return 1e9;
        return (maxr - minr + 1) * (maxc - minc + 1);
    }

    int minimumSum(vector<vector<int>>& grid) {
        g = grid;
        n = g.size();
        m = g[0].size();
        int ans = 1e9;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = min(ans, area(0, 0, i, m - 1) + area(i + 1, 0, j, m - 1) +
                                   area(j + 1, 0, n - 1, m - 1));
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                ans = min(ans, area(0, 0, n - 1, i) + area(0, i + 1, n - 1, j) +
                                   area(0, j + 1, n - 1, m - 1));
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = min(ans, area(0, 0, i, m - 1) + area(i + 1, 0, n - 1, j) +
                                   area(i + 1, j + 1, n - 1, m - 1));
                ans = min(ans, area(0, 0, i, j) + area(0, j + 1, i, m - 1) +
                                   area(i + 1, 0, n - 1, m - 1));
            }
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                ans = min(ans, area(0, 0, n - 1, j) + area(0, j + 1, i, m - 1) +
                                   area(i + 1, j + 1, n - 1, m - 1));
                ans = min(ans, area(0, 0, i, j) + area(i + 1, 0, n - 1, j) +
                                   area(0, j + 1, n - 1, m - 1));
            }
        }
        return ans;
    }
};
