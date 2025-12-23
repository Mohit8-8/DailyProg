class Solution {
    bool helper(int n, vector<int>& nums, int target, vector<vector<int>>& dp){
        if(target==0) return true;
        if(n==0) return false;
        if(dp[n][target]!=-1) return dp[n][target];

        bool notake = helper(n-1, nums, target, dp);
        bool take = false;
        if(nums[n-1]<=target){
            take = helper(n-1, nums , target-nums[n-1], dp);
        }

        return dp[n][target] = take || notake;
    }
public:
    bool canPartition(vector<int>& nums) {
        int totsum = 0;
        for(int x:nums){
            totsum+=x;
        }
        if(totsum%2!=0) return false;
        int target = totsum/2;
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return helper(n, nums, target, dp);
    }
};