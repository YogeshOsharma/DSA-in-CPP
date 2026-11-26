class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int count=10;
        while(n>0 && count <=n)
        {
            n-=count;
            count--;
        }
        return count%2!=0;
    }
};