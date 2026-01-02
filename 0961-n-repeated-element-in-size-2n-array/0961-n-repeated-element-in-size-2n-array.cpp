class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int>mp;
        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }
        int op = 0;
        for(auto it:mp){
            if(it.second>1){
                op = it.first;
            }
        }
        return op;
    }
};