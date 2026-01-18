class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, vector<int>> diag;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                diag[i - j].push_back(grid[i][j]);
            }
        }
        for (auto &it : diag) {
            if (it.first >= 0) {
                sort(it.second.begin(), it.second.end(), greater<int>());
            } else {
                sort(it.second.begin(), it.second.end());
            }
        }
        unordered_map<int, int> idx;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = diag[i - j][idx[i - j]++];
            }
        }
        return grid;
    }
};