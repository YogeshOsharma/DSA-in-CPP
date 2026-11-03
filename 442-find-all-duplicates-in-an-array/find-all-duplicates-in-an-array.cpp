class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();++i)
        {
            int index = abs(nums[i])-1;
            if(nums[index] < 0 )
            {
                ans.push_back(index+1);
            }
            else
            {
                nums[index]=-nums[index];
            }
        }
        return ans;
    }
};