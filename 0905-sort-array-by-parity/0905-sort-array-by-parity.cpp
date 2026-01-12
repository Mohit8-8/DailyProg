class Solution {
public:

    struct CustomCompare{
        bool operator()(int a,int b){
            return (a % 2) < (b % 2);
        }
    };
    vector<int> sortArrayByParity(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int left = 0, right = nums.size() - 1;

        // if(nums.size()==0) return nums;
        // while(left < right){
        //     if(nums[left] % 2 != 0 && nums[right] % 2 == 0 ){
        //         swap(nums[left], nums[right]);
        //         left++;
        //         right--;
        //     }
        //     else if(nums[left]%2!=0 && nums[right]%2!=0){
        //         right--;
        //     }
        // }
        // return nums;

        sort(nums.begin(),nums.end(),CustomCompare());
        return nums;
    }
};