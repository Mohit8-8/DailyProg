class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;
        int cnt = 0;
        unordered_set<int>st (nums.begin(), nums.end());

        for(int x : st){
            if(st.find(x-1)==st.end()){
                int curr = x;
                cnt = 1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    cnt++;
                }
            }
            longest = max(cnt, longest);
        }
        return longest;
    }
};