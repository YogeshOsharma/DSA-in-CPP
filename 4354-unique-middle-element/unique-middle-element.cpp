class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            if(nums[n/2]==nums[i] && i!=n/2) return false;
        }
        return true;
    }
};