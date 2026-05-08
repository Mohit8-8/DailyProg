class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int maj = nums[0];

        for(int i = 0; i < n; i++){
            if(count==0){
                maj = nums[i];
                count = 1;
            }
            else if(nums[i] == maj){
                count++;
            }
            else{
                count--;
            }
        }

        int fin = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == maj){
               fin++; 
            }
        }

        if(fin > n/2){
            return maj;
        }
        return{};


        
    }
};