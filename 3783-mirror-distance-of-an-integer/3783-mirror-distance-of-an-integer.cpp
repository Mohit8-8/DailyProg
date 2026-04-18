class Solution {
    int reverse(int n){
        int revNum = 0;
        while(n != 0){
            int rem = n % 10;
            revNum = revNum * 10 + rem;
            n /= 10;
        }
        return revNum;
    }
public:
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};