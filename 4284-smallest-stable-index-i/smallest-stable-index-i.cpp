class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =-1;
        for(int i=0;i<n;i++)
        {
            int min=nums[i];
            int max=nums[i];
            for(int j=0;j<=i;j++)
            {
                if(nums[j]>max)
                {
                    max=nums[j];
                }
            }
            for(int k=i;k<n;k++)
            {
                if(nums[k]<min)
                {
                    min=nums[k];
                }
            }
            if(max-min<=k)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};