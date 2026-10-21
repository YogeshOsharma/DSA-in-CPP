class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> S;
        int n = ops.size();
        for(int i=0;i<n;++i)
        {
            if(ops[i]=="C")
            {
                S.pop();
            }
            else if(ops[i]=="D")
            {
                int b = S.top();
                S.push(b*2);
            }
            else if(ops[i]=="+")
            {
                int a = S.top();
                S.pop();
                int b = S.top();
                int c = a+b;
                S.push(a);
                S.push(c);       
            }
            else
            {
                S.push(stoi(ops[i]));
            }
        }
        int sum = 0;
        while(!S.empty())
        {
            sum+=S.top();
            S.pop();
        }
        return sum;
    }
};