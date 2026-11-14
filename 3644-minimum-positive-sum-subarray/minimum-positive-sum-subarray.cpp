class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int res=INT_MAX;
        for(int i=l; i<=r; ++i)
        {
            int sum=0;
            for(int j=0;j<i;++j)
            {
                sum+=nums[j];
            }
            if(sum<res && sum>0) res=sum;
            for(int k=i;k<n;++k)
            {
                sum=sum-nums[k-i]+nums[k];
                if(sum<res && sum>0) res=sum;
            }
        }
        if(res == INT_MAX) return -1;
        return res;
    }
};