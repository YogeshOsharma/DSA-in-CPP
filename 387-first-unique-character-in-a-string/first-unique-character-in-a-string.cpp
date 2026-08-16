class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            bool isUnique = true;
            for (int j = 0; j < n; j++)
            {
                if (i != j && s[i] == s[j])
                {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) return i;
        }
        return -1;
    }
};