class Solution {
    int helper(vector<vector<int>>&og, int r, int c, int n, int m , vector<vector<int>>& dp){
        if(r>=n || c>=m) return 0;
        if(og[r][c]==1) return 0;
        if(dp[r][c] != -1) return dp[r][c];
        if(r==n-1 && c==m-1){
            return 1;
        }
        return dp[r][c] = helper(og, r+1, c, n, m, dp) + helper(og, r, c+1, n,m,dp);
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int n = og.size(), m = og[0].size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return helper(og, 0, 0, n, m , dp);
    }
};