class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int j=0;
        int n = nums.size();
        while(nums[j]<0 && k && j<n-1)
        {
            nums[j]*=-1;
            j++;
            k--;
        }
        int sum = 0;
        for(int i : nums) sum+=i;
        cout<<sum;
        if(k%2==0) return sum;
        return sum-*min_element(nums.begin(),nums.end())*2;
    }
};