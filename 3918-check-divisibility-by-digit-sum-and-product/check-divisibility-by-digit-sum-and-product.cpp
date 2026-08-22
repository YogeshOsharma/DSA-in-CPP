class Solution {
public:
    bool checkDivisibility(int n) {
        int m =n;
        int sum=0;
        int pro=1;
        if(n==0)
        {
            return false;
        }
        while(n>0)
        {
            int digit = n%10;
            sum+=digit;
            pro*=digit;
            n/=10;
        }
       return (m%(sum+pro)==0);

        
    }
};