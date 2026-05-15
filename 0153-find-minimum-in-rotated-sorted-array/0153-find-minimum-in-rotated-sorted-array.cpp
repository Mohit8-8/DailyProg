class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        for (int step = nums.size() / 2; step > 0; step /= 2)
            while(i + step < nums.size() && nums[i + step] > nums[i])
                i += step;
        i++;
        return nums[i % nums.size()];
    }
};