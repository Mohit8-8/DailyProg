class Solution {
    int helper(string& s1, string& s2, int i, int j, vector<vector<int>>& dp){
        if(i == s1.length() || j == s2.length()){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i] == s2[j]){
            return dp[i][j] = 1 + helper(s1, s2, i+1, j+1, dp);
        }
        return dp[i][j] = max(helper(s1, s2, i+1, j, dp), helper(s1, s2, i, j+1, dp));
    }
    //s1 = abac //s2 = bcac
    string getLCS(string s1, string s2){
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        int len = helper(s1, s2, 0, 0, dp);
        int i = 0, j = 0;
        string lcs = "";
        while(i < n && j < m){
            if(s1[i] == s2[j]){
                lcs += s1[i];
                i++;
                j++;
            }
            else if(dp[i+1][j] > dp[i][j+1]){
                i++;
            }
            else{
                j++;
            }
        }
        return lcs;
    }
public:
    string shortestCommonSupersequence(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        string lcs = getLCS(s1, s2);
        // str1 = abac str2 = bcac
        // lcs = bac
        // final answer = abcac
        int i = 0, j = 0;
        string ans = "";
        for(int k = 0; k < lcs.length(); k++){
            while(s1[i] != lcs[k]){
                ans += s1[i++];
            }
            while(s2[j] != lcs[k]){
                ans += s2[j++];
            }
            ans += lcs[k];
            i++;
            j++;
        }
        while(i < s1.length()){
            ans += s1[i++];
        }
        while(j < s2.length()){
            ans += s2[j++];
        }
        return ans;
    }
};