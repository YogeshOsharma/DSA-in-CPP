class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.length();
        int origin=0;
        for (int i=0;i<n;i++)
        {
            if(moves[i]=='R') origin+=1;
            if(moves[i]=='L') origin-=1;
            if(moves[i]=='U') origin+=4;
            if(moves[i]=='D') origin-=4;

        }
        if(origin==0)
        {
            return true;
        }
        return false;
    }
};