class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if (heightMap.empty() || heightMap[0].empty())
            return 0;
        int r = heightMap.size();
        int c = heightMap[0].size();
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        vector<vector<bool>> visited(r, vector<bool>(c, false));

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                    pq.push({heightMap[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }

        int ans = 0;
        int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int currentHeight = top.first;
            int x = top.second.first;
            int y = top.second.second;
            for (int k = 0; k < 4; ++k) {
                int nx = x + dir[k][0];
                int ny = y + dir[k][1];
                if (nx >= 0 && nx < r && ny >= 0 && ny < c &&
                    !visited[nx][ny]) {
                    if (heightMap[nx][ny] < currentHeight) {
                        ans += (currentHeight - heightMap[nx][ny]);
                    }
                    pq.push({max(heightMap[nx][ny], currentHeight), {nx, ny}});
                    visited[nx][ny] = true;
                }
            }
        }
        return ans;
    }
};