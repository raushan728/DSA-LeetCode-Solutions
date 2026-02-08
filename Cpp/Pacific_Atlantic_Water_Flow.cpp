class Solution {
public:
    int m, n;
    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int r,
             int c, int ph) {
        if (r < 0 || r >= m || c < 0 || c >= n || visited[r][c] ||
            heights[r][c] < ph) {
            return;
        }
        visited[r][c] = true;
        for (int i = 0; i < 4; i++) {
            dfs(heights, visited, r + dr[i], c + dc[i], heights[r][c]);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if (heights.empty())
            return {};

        m = heights.size();
        n = heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            dfs(heights, pacific, i, 0, heights[i][0]);
            dfs(heights, atlantic, i, n - 1, heights[i][n - 1]);
        }
        for (int j = 0; j < n; j++) {
            dfs(heights, pacific, 0, j, heights[0][j]);
            dfs(heights, atlantic, m - 1, j, heights[m - 1][j]);
        }
        vector<vector<int>> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }

        return ans;
    }
};