class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> count;
        for (int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        vector<pair<int, int>> freq (count.begin(), count.end());

        sort(freq.begin(), freq.end(), [](const auto& a, const auto& b){
            return a.second>b.second;
        });

        vector<int>res;
        for(int i = 0; i < k; i++){
            res.push_back(freq[i].first);
        }
        return res;
        
    }
};