class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int n = heights.size();
       vector<int>v=heights;
       sort(v.begin(),v.end());
       int res = 0;
       for(int i =0;i<n;++i)
       {
        if(heights[i]!=v[i])res++;
       } 
       return res;
    }
};