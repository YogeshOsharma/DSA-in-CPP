#include <iostream>
using namespace std;

// Function to find minimum and maximum values in an array
void minmax(int array[], int length, int& min, int &max) {
    min = array[0];
    max = array[0];
    
    for(int i = 1; i < length; i++) {
        if(array[i] < min) {
            min = array[i];
        }
        if(array[i] > max) {
            max = array[i];
        }
    }
}

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
    
    int minimum, maximum;
    
    // Call minmax function with reference parameters
    minmax(arr, n, minimum, maximum);
    
    cout << "\nMinimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;
    
    return 0;
}
