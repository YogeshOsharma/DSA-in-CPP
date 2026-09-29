class Solution {
public:
    int addDigits(int n) {
        int sum=0;
while(n>0 || sum>9)
{
    if(n==0)
    {
        n = sum;
        sum=0;
    }
    int digit=n%10;
    sum+=digit;
    n/=10;
}
return sum;
    }
};