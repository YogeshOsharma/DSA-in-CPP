class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(int i=0;i<s.length();++i)
        {
            if(s.empty() || s[i]!='*')
            {
                stk.push(s[i]);
            }
            else
            {
                stk.pop();
            }
        }
        string ans="";
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};