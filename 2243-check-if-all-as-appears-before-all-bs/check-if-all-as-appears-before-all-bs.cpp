class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        int i = 0;
        bool flag = false;
        for (i; i < n; ++i) {
            if (s[i] == 'b') {
                flag = true;
                break;
            }
        }
        if (!flag)
            return true;
        else {
            for (i; i < n; ++i) {
                if (s[i] == 'a') return false;
            }
        }
        return true;
    }
};