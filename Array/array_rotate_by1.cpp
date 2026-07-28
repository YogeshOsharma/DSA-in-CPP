#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 4; i >= 1; i--)
    {
        swap(arr[i], arr[i-1]);
    }
    swap(arr[0],arr[5]);

    for (int i=0;i<=4;i++){
    cout << arr[i] << " ";}
    return 0;
}