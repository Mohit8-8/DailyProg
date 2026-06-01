class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1 || cost.size()==2){
            return accumulate(cost.begin(), cost.end(),0);
        }
        sort(cost.begin(), cost.end(), greater<int>());
        // reverse(cost.begin(), cost.end());

        int total = 0;
        for(int i = 1; i <= cost.size(); i++){
            if(i%3!=0){
                total += cost[i-1];
            }
        }
        return total;
        


    }
};