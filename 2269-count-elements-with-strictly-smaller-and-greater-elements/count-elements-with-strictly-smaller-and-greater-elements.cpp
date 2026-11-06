class Solution {
public:
    int countElements(vector<int>& nums) {
        auto max = *max_element(nums.begin(), nums.end());
        auto min = *min_element(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < max && nums[i] > min) {
                count++;
            }
        }
        return count;
    }
};