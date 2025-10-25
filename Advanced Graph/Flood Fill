
// Flood Fill (BFS or DFS in 2D Grid)
// Problem: Replace the color of all pixels connected (vertically/horizontally) to the given pixel.

// Code (C++):


class Solution {
private:
    void dfs(vector<vector<int>>& img, int r, int c, int color, int orig) {
        int n = img.size(), m = img[0].size();
        if (r < 0 || r >= n || c < 0 || c >= m || img[r][c] != orig)
            return;
        img[r][c] = color;
        dfs(img, r + 1, c, color, orig);
        dfs(img, r - 1, c, color, orig);
        dfs(img, r, c + 1, color, orig);
        dfs(img, r, c - 1, color, orig);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc,
                                  int color) {
        int orig = img[sr][sc];
        if (orig != color)
            dfs(img, sr, sc, color, orig);
        return img;
    }
};




// Time Complexity: O(m×n)
// Space Complexity: O(m×n) (Recursion stack)