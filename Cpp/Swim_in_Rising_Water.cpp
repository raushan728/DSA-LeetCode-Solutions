class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;

        vector<vector<bool>> visited(n, vector<bool>(n, false));
        pq.push({grid[0][0], {0, 0}});
        visited[0][0] = true;
        int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int currTime = top.first;
            int r = top.second.first;
            int c = top.second.second;
            if (r == n - 1 && c == n - 1) {
                return currTime;
            }

            for (int i = 0; i < 4; i++) {
                int nr = r + dir[i][0];
                int nc = c + dir[i][1];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                    !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    int newTime = max(currTime, grid[nr][nc]);

                    pq.push({newTime, {nr, nc}});
                }
            }
        }

        return -1;
    }
};