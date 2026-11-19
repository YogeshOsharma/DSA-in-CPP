class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x = nums[n-3]-nums[0];
        int y = nums[n-2]-nums[1];
        int z = nums[n-1]-nums[2];
        return min(x,min(y,z));
    }
};