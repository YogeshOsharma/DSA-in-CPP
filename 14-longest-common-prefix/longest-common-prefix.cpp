class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        sort(s.begin(),s.end());
        string f = s[0];
        string l = s[s.size()-1];

        for(int i=0;i<min(f.length(),l.length());++i)
        {
            if(f[i]==l[i])
            {
                ans+=f[i];
            }
            else break;
        }
        return ans;
    }
};