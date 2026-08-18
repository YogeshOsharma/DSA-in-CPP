class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) {
            int freq[51] = {0};
            for (int x : nums) {
                freq[x]++;
            }
            
            int maxVal = -1;
            for (int i = 50; i >= 0; i--) {
                if (freq[i] == 1) {
                    return i;
                }
            }
            return -1;
        }

        if (k == n) {
            int maxVal = -1;
            for (int x : nums) {
                if (x > maxVal) maxVal = x;
            }
            return maxVal;
        }
        
        int start = -1;
        int end = -1;

        int countstart = 0;
        for (int x : nums) {
            if (x == nums[0]) countstart++;
        }
        if (countstart == 1) start = nums[0];

        int countLast = 0;
        for (int x : nums) {
            if (x == nums[n-1]) countLast++;
        }
        if (countLast == 1) end = nums[n-1];

        return max(start, end);
    }
};