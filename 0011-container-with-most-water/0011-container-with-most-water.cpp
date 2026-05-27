class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxi = 0;
        int right = nums.size()-1;
        int left = 0;

        int ans = 0;
        while(left < right){
            int width = right- left;
            int height = min(nums[left], nums[right]);
            ans = width*height;
            maxi = max(ans, maxi);
            
            if(nums[left]<nums[right]){
                left++;
            }else if(nums[right]<nums[left]) {
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return maxi;

    }
};