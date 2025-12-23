class Solution(object):
    def helper(self,n,dp):
        if n<=1:
            return 1
        if dp[n]!=-1:
            return dp[n]
        dp[n] = self.helper(n-1,dp) + self.helper(n-2,dp)
        return dp[n]
    def climbStairs(self, n):
        dp=[-1]*(n+1)
        return self.helper(n,dp)
        