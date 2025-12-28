class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sufmin(n);
        sufmin[n-1] = nums[n-1];

        for(int i = n-2;i>=0;i--){
            sufmin[i] = min((long long)nums[i],sufmin[i+1]);
        }
        long long prefsum = 0;
        long long ans = LLONG_MIN;
        for(int i = 0;i<n-1;i++){
            prefsum+=nums[i];
            long long score = prefsum - sufmin[i+1];
            ans = max(ans, score);
        }
        return ans;
    }
};