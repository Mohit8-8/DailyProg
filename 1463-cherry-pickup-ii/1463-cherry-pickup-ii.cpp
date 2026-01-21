class Solution {
    int m, n;
    vector<vector<vector<int>>> dp;

    int helper(vector<vector<int>>& grid, int r, int c1, int c2) {
        if (c1 < 0 || c1 >= n || c2 < 0 || c2 >= n) return -1e9;
        if (r == m) return 0;

        if (dp[r][c1][c2] != -1) return dp[r][c1][c2];

        int val = grid[r][c1];
        if (c1 != c2) val += grid[r][c2];

        int maxi = -1e9;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                maxi = max(maxi, helper(grid, r + 1, c1 + i, c2 + j));
            }
        }

        return dp[r][c1][c2] = val + maxi;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        dp.assign(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return helper(grid, 0, 0, n - 1);
    }
};
