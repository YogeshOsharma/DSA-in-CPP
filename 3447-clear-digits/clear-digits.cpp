class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        int n = s.length();
        for(int i=0;i<n;++i)
        {
            if(!st.empty() && s[i]>=48 && s[i]<=57)
            {
                st.pop();
            }
            else st.push(s[i]);
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};