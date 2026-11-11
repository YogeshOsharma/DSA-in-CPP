class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> ans = {1};
        while (ans.size() < n) {
            vector<int> temp;
            for (int i : ans) {
                if (i * 2 - 1 <= n) {
                    temp.push_back(i * 2 - 1);
                }
            }
            for (int i : ans) {
                if (i * 2 <= n) {
                    temp.push_back(i * 2);
                }
            }
            ans = temp;
        }
        return ans;
    }
};