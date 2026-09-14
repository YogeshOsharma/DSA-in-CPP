class Solution {
public:
    string sortSentence(string s) {
        int n = s.length();
        int search = 1;
        string result = ""; 

        for (int i = 0; i < n; i++) {
            if (s[i] == (char)('0' + search)) {
                int j = i - 1;
                string ans = "";
                while (j >= 0 && s[j] != ' ') {
                    ans += s[j];
                    j--;
                }
                reverse(ans.begin(), ans.end());  

                if (!result.empty()) result += ' '; 
                result += ans;

                search++;
                i = 0;
            }
        }

        return result;
    }
};