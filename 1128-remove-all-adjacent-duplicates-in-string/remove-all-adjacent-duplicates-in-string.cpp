class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> stk;
        int n = s.length();
        for(int i=0;i<n;++i)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
            }
            else if (s[i]==stk.top())
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        string ans ="";
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};