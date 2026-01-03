class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int candidate = 0;
        for(auto it : nums){
            if(cnt == 0){
                candidate = it;
            }
            if(it == candidate){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return candidate;
    }
};