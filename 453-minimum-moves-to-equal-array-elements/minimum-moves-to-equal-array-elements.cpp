class Solution {
public:

    long long minn(vector<int>arr)
    {
        long long m = arr[0];
        for(long long i : arr)
        {
            m=min(m,i);
        }
        return m;
    }
    
    int minMoves(vector<int>& nums) {
        long long m = minn(nums);
        long long move=0;
        for(int i : nums)
        {
            move+=i-m;
        }
        return (int)move;
    }
};