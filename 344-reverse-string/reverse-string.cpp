class Solution {
public:
    void reverseString(vector<char>& s) {
        stack <char> S ;
        for(int i =0;i<s.size();++i)
        {
            S.push(s[i]);       
        }
        for(int i=0;i<s.size();++i)
        {
            s[i]=S.top();
            S.pop();
        }
    }
};