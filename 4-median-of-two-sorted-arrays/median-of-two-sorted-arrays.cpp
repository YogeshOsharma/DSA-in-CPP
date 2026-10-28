class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> arr;
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                arr.push_back(nums1[i++]);

            } else if (nums1[i] > nums2[j]) {
                arr.push_back(nums2[j++]);

            } else if (nums1[i] == nums2[j]) {
                arr.push_back(nums1[i++]);
                arr.push_back(nums2[j++]);
            }
        }
        while (i < m) {
            arr.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            arr.push_back(nums2[j]);
            j++;
        }
        int x = arr.size();
        if (x % 2 != 0) {
            return arr[x/2];
        }
        return ((double)arr[x/2-1]+arr[x/2])/2.0;
    }
};