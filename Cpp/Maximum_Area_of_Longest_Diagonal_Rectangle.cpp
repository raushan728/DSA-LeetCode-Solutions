class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& rectangles) {
        int maxDiag = 0;
        int ans = 0;
        for (auto& r : rectangles) {
            int l = r[0], w = r[1];
            int diag = l * l + w * w;
            int area = l * w;
            if (diag > maxDiag) {
                maxDiag = diag;
                ans = area;
            } else if (diag == maxDiag) {
                ans = max(ans, area);
            }
        }
        return ans;
    }
};
