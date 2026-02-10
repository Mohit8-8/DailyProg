class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        for(int i = 0; i < n ; i++ ){
            if(nums[i]==0){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i]==1){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i]==2){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i < n ; i++){
            nums[i]=temp[i];
        }

    }
};