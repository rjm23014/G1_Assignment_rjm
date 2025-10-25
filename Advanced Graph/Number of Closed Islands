// Problem: In a grid of 0s (land) and 1s (water), count the number of closed islands (all surrounded by water, not touching edge).

// Logic: First, remove all land connected to the borders, then count internal land clusters.


class Solution {
private:
    void dfs(vector<vector<int>>& grid, int r, int c) {
        int n = grid.size(), m = grid[0].size();
        if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] != 0)
            return;
        grid[r][c] = 1;
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), count = 0;
        // Remove border-connected lands
        for (int i = 0; i < n; ++i) {
            dfs(grid, i, 0);
            dfs(grid, i, m - 1);
        }
        for (int j = 0; j < m; ++j) {
            dfs(grid, 0, j);
            dfs(grid, n - 1, j);
        }
        // Count closed islands
        for (int i = 1; i < n - 1; ++i) {
            for (int j = 1; j < m - 1; ++j) {
                if (grid[i][j] == 0) {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};


// Time Complexity: O(m×n)

// Space Complexity: O(m×n)

