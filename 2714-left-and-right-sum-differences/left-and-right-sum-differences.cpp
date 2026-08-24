class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        
        long long totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        long long leftSum = 0;
        
        for (int i = 0; i < n; ++i) {
            
            long long rightSum = totalSum - leftSum - nums[i];
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }
        
        return answer;
    }
};