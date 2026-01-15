class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> height(cols, 0);
        int ans = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (mat[r][c] == 1)
                    height[c]++;
                else
                    height[c] = 0;
            }
            stack<pair<int, int>> st;
            int currSum = 0;
            for (int c = 0; c < cols; c++) {
                int count = 1;
                while (!st.empty() && st.top().first >= height[c]) {
                    currSum -= st.top().first * st.top().second;
                    count += st.top().second;
                    st.pop();
                }
                currSum += height[c] * count;
                ans += currSum;

                st.push({height[c], count});
            }
        }
        return ans;
    }
};