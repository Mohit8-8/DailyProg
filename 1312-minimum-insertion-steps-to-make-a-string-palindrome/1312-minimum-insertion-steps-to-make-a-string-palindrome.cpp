class Solution {
    int helper(string &s1, string &s2, int i, int j, vector<vector<int>>& dp) {
        if(i == s1.length() || j == s2.length()) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(s1[i] == s2[j]){
            return dp[i][j] = 1 + helper(s1, s2, i+1, j+1, dp);
        }

        return dp[i][j] = max(helper(s1, s2, i+1, j, dp),
                             helper(s1, s2, i, j+1, dp));
    }

public:
    int minInsertions(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        int n = s.length();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));

        int lps = helper(s, rev, 0, 0, dp);   // longest palindromic subsequence
        return n - lps;   // minimum insertions
    }
};
