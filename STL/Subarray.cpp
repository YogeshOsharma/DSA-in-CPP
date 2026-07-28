#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nAll possible subarrays:\n";

    int count = 0;

    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            cout << "[ ";

            for(int k = start; k <= end; k++)
            {
                cout << arr[k] << " ";
            }

            cout << "]\n";
            count++;
        }
    }

    cout << "\nTotal subarrays = " << count << endl;

    return 0;
}