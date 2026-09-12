class Solution {
public:
        vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int a=-1,b=-1;

        int s=0,e=n-1;
        while(s<=e)
        {
            int m;
            m=s+(e-s)/2;
            if(nums[m]==target)
            {
                a=m;
                e=m-1;
            }
            else if(nums[m]<target) s=m+1;
            else e=m-1;
        }

        s=0,e=n-1;
        while(s<=e)
        {
            int m;
            m=s+(e-s)/2;
            if(nums[m]==target)
            {
                b=m;
                s=m+1;
            }
            else if(nums[m]<target) s=m+1;
            else e=m-1;
        }
        return{a,b};
    }
};