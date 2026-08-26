class Solution {
public:
    int mirrorDistance(int n) {
        if(n<9) return 0;
        int m =n;
        int reversed = 0;
        while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n/=10;
        }
        return abs(m-reversed);
    }
};