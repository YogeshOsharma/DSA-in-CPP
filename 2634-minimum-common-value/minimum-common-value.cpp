class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n=nums2.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums2[j]==nums1[i])return nums1[i];
                if(nums2[j]>nums1[i])break;
            }
        }
    return -1;
    }
};