class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();
        string ans="";
        for(int i=0;i<n;++i)
        {
            if(s[i]<91 && s[i]>64) ans+=s[i]+32;
            else ans+=s[i];
        }
        return ans;
    }
};