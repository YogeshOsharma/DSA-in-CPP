class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> v;
        for (int i = 0; i < n1; ++i) {
            int flag=1;
            for (int j = 0; j < n2; ++j) {
                if(j==n2-1)
                {
                    flag = 0;
                    break;
                }
                if (nums2[j] == nums1[i]) {
                    for (int k = j; k < n2; ++k) {
                        if(nums2[k]>nums1[i])
                        {
                            v.push_back(nums2[k]);
                            flag =2;
                            break;
                        }
                    }
                }
                if(flag==2)break;
            }
            if(!flag) v.push_back(-1);
        }
        return v;
    }
};