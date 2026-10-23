
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if (n == k)
            return "0";
        stack<char> S;
        for (int i = 0; i < n; i++) {
            while (!S.empty() && S.top() > num[i] && k > 0) {
                S.pop();
                k--;
            }

            S.push(num[i]);
        }
        while (k > 0 && !S.empty()) {
            S.pop();
            k--;
        }
        string ans = "";

        while (!S.empty()) {
            ans += S.top();
            S.pop();
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while (i < ans.length() && ans[i] == '0') {
            i++;
        }
        ans = ans.substr(i);
        if (ans.empty())
            return "0";
        return ans;
    }
};
