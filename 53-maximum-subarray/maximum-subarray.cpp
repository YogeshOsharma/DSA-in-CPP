class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int msum=INT_MIN;
        for(int i : nums)
        {
            sum+=i;
            msum=max(sum,msum);
            sum = sum<0? 0:sum;
        }
        return msum;
    }
};