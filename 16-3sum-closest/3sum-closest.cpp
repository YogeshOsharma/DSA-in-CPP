class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;++i)
        {
            int r=n-1 , l=i+1;
            while(l<r)
            {
                int sum = nums[i]+nums[r]+nums[l];
                if(abs(target-sum)<abs(target-ans))
                {
                    ans = sum;
                }
                if(sum<target)l++;
                else if(sum>target)r--;
                else return sum;
            }
        }
        return ans;
    }
};