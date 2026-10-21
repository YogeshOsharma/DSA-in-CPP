
class Solution {
public:
    string makeGood(string s) {
        stack<char> S;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (!S.empty() && tolower(S.top()) == tolower(c) && S.top() != c) {
                S.pop();
            } else {
                S.push(c);
            }
        }

        string ans;
        while (!S.empty()) {
            ans += S.top();
            S.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
