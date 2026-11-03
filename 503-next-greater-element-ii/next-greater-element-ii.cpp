class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
		vector<int> ans(n, -1);
		stack<int> st;
		for (int i = 0; i<2*n; ++i)
			{
			while (!st.empty() && arr[st.top()] <arr[i%n])
				{
				ans[st.top()] = arr[i%n];
				st.pop();
			}
			st.push(i%n);
		}
		return ans;
    }
};