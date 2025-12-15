class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int oldColor = image[sr][sc];
        if (oldColor == color)
            return image;

        int m = image.size(), n = image[0].size();
        dfs(image, sr, sc, oldColor, color, m, n);
        return image;
    }

private:
    void dfs(vector<vector<int>>& image, int i, int j, int oldColor,
             int newColor, int m, int n) {
        if (i < 0 || j < 0 || i >= m || j >= n || image[i][j] != oldColor)
            return;

        image[i][j] = newColor;

        dfs(image, i + 1, j, oldColor, newColor, m, n);
        dfs(image, i - 1, j, oldColor, newColor, m, n);
        dfs(image, i, j + 1, oldColor, newColor, m, n);
        dfs(image, i, j - 1, oldColor, newColor, m, n);
    }
};