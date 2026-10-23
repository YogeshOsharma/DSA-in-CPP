class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> S;
        int n = a.size();
        for (int i = 0; i < n; ++i) {
            if (S.empty()) {
                S.push(a[i]);
            } else if (S.top() > 0 && a[i] < 0) {
                if (abs(S.top()) < abs(a[i])) {
                    while (!S.empty() && abs(S.top()) < abs(a[i]) && (S.top() > 0 && a[i] < 0)) {
                        S.pop();
                    }
                    if (S.empty()) {
                        S.push(a[i]);
                    }
                    else if (abs(S.top()) == abs(a[i])) {
                        if( (S.top()<0 && a[i]<0) || (S.top()>0 && a[i]>0) )
                        {
                            S.push(a[i]);
                        }
                        else
                        {
                            S.pop();
                        }
                    }
                    else if(S.top()<0 && a[i]<0)
                    {
                        S.push(a[i]);
                    }

                } else if(abs(S.top()) == abs(a[i])) {
                    S.pop();
                }
                else
                {
                    continue;
                }
            } else {
                S.push(a[i]);
            }
        }
        vector<int> ans;
        while (!S.empty()) {
            ans.push_back(S.top());
            S.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};