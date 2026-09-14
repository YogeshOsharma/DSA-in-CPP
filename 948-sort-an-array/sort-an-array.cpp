class Solution {
public:
    void merge(vector<int>& arr, int start, int mid, int end) {
        vector<int> temp(end - start + 1);
        int left = start, right = mid + 1, index = 0;

        while (left <= mid && right <= end) {
            if (arr[left] < arr[right]) {
                temp[index++] = arr[left++];
            } else {
                temp[index++] = arr[right++];
            }
        }
        while (left <= mid) {
            temp[index++] = arr[left++];
        }
        while (right <= end) {
            temp[index++] = arr[right++];
        }
        index = 0;
        while (start <= end) {
            arr[start++] = temp[index++];
        }
    }

    void divide(vector<int> &arr, int start, int end) {
        if (start == end)
            return;
        int mid = start + (end - start) / 2;
        divide(arr, start, mid);
        divide(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
    vector<int> sortArray(vector<int>& arr) {
        if (arr.size() <= 1) return arr;
        divide(arr,0,arr.size()-1);
        return arr;
    }
};