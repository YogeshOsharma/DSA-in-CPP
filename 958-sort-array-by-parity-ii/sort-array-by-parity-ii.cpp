class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int p1;
        int p2=1;
        for(p1=0;p1<n;p1+=2)
        {
            if(nums[p1]%2==1)
            {
                while(nums[p2]%2==1)
                {
                    p2+=2;
                }
                swap(nums[p1],nums[p2]);
            }
        }
        return nums;
        }
    };