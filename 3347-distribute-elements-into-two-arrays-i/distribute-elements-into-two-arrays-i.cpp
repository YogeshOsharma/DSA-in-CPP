class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int i=0;
        vector<int>arr1;
        vector<int>arr2;
            while(i<nums.size())
        {
            if(arr1.empty()) 
            {
                arr1.push_back(nums[i]);
                i++;
            }
            if(arr2.empty()) 
            {
                arr2.push_back(nums[i]);
                i++;
            }
            if(arr1.back()>arr2.back())
            {
                arr1.push_back(nums[i]);
                i++;
            }
            else
            {
                arr2.push_back(nums[i]);
                i++;
            }
        }
        vector<int> result = arr1;
        for (int val : arr2)
        {
            result.push_back(val);
        }
        return result;
        
    }

};