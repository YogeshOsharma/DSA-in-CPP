class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) return n;
        int ans;
        int i = n+1;
        while(i)
        {
            if(i%2==0 && i%n==0)
            {
                ans=i;
                break;
            }
            i++;
        }
        return ans;
    }
};