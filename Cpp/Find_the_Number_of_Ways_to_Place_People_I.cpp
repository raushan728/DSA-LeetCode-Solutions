class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end(), [](auto& a, auto& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int maxY = -1e9;

            for (int j = i + 1; j < n; j++) {
                if (points[j][1] <= points[i][1]) {
                    if (points[j][1] > maxY) {
                        ans++;
                        maxY = points[j][1];
                    }
                }
            }
        }
        return ans;
    }
};