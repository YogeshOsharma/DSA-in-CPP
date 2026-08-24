class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum,rightsum,ans;
        int sum=0;
        if (n==0)
        {
            ans.push_back(0);
            return ans;
        } 
        for(int i=0;i<n;i++)
        {
            if(i==0){ leftsum.push_back(0);i++;}
            sum+=nums[i-1];
            leftsum.push_back(sum);
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            rightsum.push_back(sum);
            sum+=nums[i];
            
        }
        reverse(rightsum.begin(), rightsum.end());
        int m = leftsum.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans;
    }
};