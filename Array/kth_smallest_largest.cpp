#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int k;
    cout << "\nEnter K: ";
    cin >> k;
    
    // Sort the array
    sort(arr, arr + n);
    
    // Kth smallest is at index k-1
    int kth_smallest = arr[k - 1];
    
    // Kth largest is at index n-k
    int kth_largest = arr[n - k];
    
    cout << "\n" << k << "th smallest number is " << kth_smallest << endl;
    cout << k << "th largest number is " << kth_largest << endl;
    
    return 0;
}
