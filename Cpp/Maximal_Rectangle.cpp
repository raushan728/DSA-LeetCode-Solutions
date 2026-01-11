class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty())
            return 0;
        int maxRec = 0;
        vector<int> height(matrix[0].size(), 0);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
            }
            maxRec = max(maxRec, recArea(height));
        }
        return maxRec;
    }
    int recArea(vector<int> height) {
        stack<int> st;
        int maxArea = 0;
        height.push_back(0);
        for (int i = 0; i < height.size(); i++) {
            while (!st.empty() && height[st.top()] > height[i]) {
                int h = height[st.top()];
                st.pop();
                int w = 0;
                if (st.empty())
                    w = i;
                else
                    w = i - st.top() - 1;
                maxArea = max(maxArea, w * h);
            }
            st.push(i);
        }
        height.pop_back();
        return maxArea;
    }
};