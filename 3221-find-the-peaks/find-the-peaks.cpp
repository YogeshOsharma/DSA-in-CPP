class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        int n = m.size();
        vector<int> ans;
        for(int i=1;i<n-1;++i)
        {
            if(m[i]>m[i-1] && m[i]>m[i+1]) ans.push_back(i);
        }
        return ans;
    }
};