class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;
        for (int i = 0; i < s.length(); ++i) {
            int rev = 26 - (s[i] - 'a');
            degree += rev * (i + 1);
        }
        return degree;
    }
};