class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int beg = 0, end = n-1;
        if (nums[0] < nums[n-1]) return nums[0];
        while (beg < end){
            int mid = (beg+end)/2;
            if (nums[mid] > nums[end]) beg = mid+1;
            else if (nums[mid] < nums[end]) end = mid;
            else end--;
        }
        return nums[end];
    }
};