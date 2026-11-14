class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        for(int i=1;i<n;++i)
        {
            int d = abs(arr[i]-arr[i-1]);
            diff = min(d,diff);
        }
        vector<vector<int>> res;
        for(int i=1;i<n;++i)
        {
            vector<int>temp;
            if(abs(arr[i]-arr[i-1])==diff)
            {
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                res.push_back(temp);
            }
        }
        return res;
    }
};