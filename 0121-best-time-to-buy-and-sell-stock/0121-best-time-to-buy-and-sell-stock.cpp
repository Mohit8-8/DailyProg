class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();

        int mini = nums[0];
        int profit = 0;
        int cost = 0;

        for(int i = 1; i < n ; i++) {
            cost = nums[i] - mini;
            profit = max(cost, profit);
            mini = min(nums[i] , mini);
        }

        return profit;
    }
};