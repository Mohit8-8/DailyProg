class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& fr) {
        vector<int>ans;
        for(int i = 0; i < order.size(); i++){
            for(int a = 0; a < fr.size(); a++){
                if(order[i]==fr[a]){
                    ans.push_back(order[i]);
                    break;
                }
            }
        }
        return ans;
    }
};