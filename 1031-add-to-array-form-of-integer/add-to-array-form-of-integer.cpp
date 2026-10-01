
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> arr;
        int carry = 0;

        for (int i = n - 1; i >= 0; i--) {
            int digit = k % 10;
            int sum = num[i] + digit + carry;

            arr.push_back(sum % 10);
            carry = sum / 10;
            k /= 10;
        }

        while (k > 0) {
            int sum = (k % 10) + carry;
            arr.push_back(sum % 10);
            carry = sum / 10;
            k /= 10;
        }

        if (carry > 0) {
            arr.push_back(carry);
        }

        reverse(arr.begin(), arr.end());
        return arr;
    }
};
