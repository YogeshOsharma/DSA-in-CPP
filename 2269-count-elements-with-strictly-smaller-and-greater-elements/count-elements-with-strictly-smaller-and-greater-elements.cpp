class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==2) return 0;
        sort(nums.begin(),nums.end());
        int i=1;
        int n=nums.size();
        while(nums[i]==nums[i-1] && i<n)
        {
            i++;
        }
        int j =n-2;
        while(nums[j]==nums[j+1] && j>0)
        {
            j--;
        }
        if(j<i) return 0;
        return j-i+1;
        
    }
};