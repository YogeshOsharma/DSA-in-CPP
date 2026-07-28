#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void segregate0and1(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        while(start < end)
        {
            if(arr[start] == 0)
            {
                start++;
            }
            else if(arr[end] == 1)
            {
                end--;
            }
            else
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};

int main()
{
    vector<int>v={1,0,1,0,1,1,1,0,0,1,0};
    Solution s;
    s.segregate0and1(v);
}