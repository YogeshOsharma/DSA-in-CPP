class Solution {
public:
    string finalString(string s) {
        string ans="";
        int n = s.length();
        int i = 0;
        while(i<n)
        {
            if(s[i]=='i')
            {
                reverse(ans.begin(),ans.end());
            }
            else ans+=s[i];
            i++;
        }
        return ans;
    }
};