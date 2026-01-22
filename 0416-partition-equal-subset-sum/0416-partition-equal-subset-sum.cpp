class Solution {
    bool helper(vector<int>&nums, int i, int sum, vector<vector<int>>& dp){
        if(sum == 0) return true;
        if(i == nums.size()|| sum < 0) return false;
        if(dp[i][sum]!=-1) return dp[i][sum];
        bool choose = helper(nums, i+1 ,sum - nums[i], dp);
        bool notchoose = helper(nums, i+1, sum, dp);
        return dp[i][sum] = (choose || notchoose);
    }
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(int i : nums){
            sum+=i;
        }
        if(sum & 1 ) return false;
        vector<vector<int>>dp(n+1, vector<int>(sum+1 , -1));
        return helper(nums, 0, sum/2, dp);
    }
};