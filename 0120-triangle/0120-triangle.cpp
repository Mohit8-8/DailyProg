class Solution {
    int helper(vector<vector<int>>& tri, int i , int j , int n , vector<vector<int>>& dp ){
        if(i==n) return 0;
        if(dp[i][j]!=INT_MAX) return dp[i][j];

        int same = helper(tri , i+1 , j+1, n, dp) + tri[i][j];
        int next = helper(tri , i+1, j , n, dp) + tri[i][j];

        return dp[i][j] =  min(same, next);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, INT_MAX));
        return helper(triangle, 0, 0, n, dp);
    }
};