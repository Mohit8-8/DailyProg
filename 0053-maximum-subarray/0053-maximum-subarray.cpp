class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = nums[0];
        int curmax = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curmax = max(curmax+nums[i], nums[i]);
            maxi = max(curmax, maxi);
        }
        return maxi;
    }
};