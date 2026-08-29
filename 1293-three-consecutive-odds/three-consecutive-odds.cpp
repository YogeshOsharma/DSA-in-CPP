class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<arr.size();i++)
        {
            int j=i;
            if(i>=n-2) return false;
            if(arr[j]%2==1)
            {
                j++;
                if(arr[j]%2==1)
                {
                    j++;
                    if(arr[j]%2==1)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};