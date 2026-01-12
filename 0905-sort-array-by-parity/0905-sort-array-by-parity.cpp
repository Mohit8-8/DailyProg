class Solution {
public:

    // struct CustomCompare{
    //     bool operator()(int a,int b){
    //         return (a % 2) < (b % 2);
    //     }
    // };
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = nums.size() - 1;

        while(left <= right){
            if(nums[left] % 2 == 1 && nums[right] % 2 == 0) swap(nums[left], nums[right]);
            else if(nums[left] % 2 == 0 && nums[right] % 2 == 1){
                left++;
                right--;
            }
            else if(nums[left] % 2 == 1 && nums[right] % 2 == 1) right--;
            else if(nums[left] % 2 == 0 && nums[right] % 2 == 0) left++;
        }
        return nums;

        // sort(nums.begin(),nums.end(),CustomCompare());
        // return nums;
    }
};