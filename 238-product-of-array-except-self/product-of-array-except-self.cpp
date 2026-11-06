class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c = 0;
        int x;
        int n = nums.size();
        for (int i=0;i<n;++i) {
            if (nums[i] == 0)
            {
                c++;
                x=i;
            }
                
        }
        if (c > 1)
        {
            vector<int> v(n, 0);
            return v;
        }
        int pro = 1;
        int p = 1;
        for (int i : nums) {
            pro *= i;
            if (i == 0)
                continue;
            p *= i;
        }
        if (c == 1) {
            vector<int> v(n, 0);
            v[x]=p;
            return v;
        }
        vector<int> v;
        for(int i : nums)
        {
            v.push_back(pro/i);
        }
        return v;
    }
};