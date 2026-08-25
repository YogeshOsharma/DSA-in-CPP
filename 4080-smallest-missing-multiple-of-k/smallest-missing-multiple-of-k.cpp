class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        
        int multiple = k;
        int i = 0;  
        while (true) {
            while (i < nums.size() && nums[i] < multiple) {
                i++;
            }
            if (i < nums.size() && nums[i] == multiple) {
                multiple += k;
                
            } else {
                return multiple;
            }
        }
    }
};