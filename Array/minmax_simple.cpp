#include <iostream>
using namespace std;

void minmax(int array[], int length, int& min, int &max) {
    min = array[0];
    max = array[0];
    
    for(int i = 1; i < length; i++) {
        if(array[i] < min) min = array[i];
        if(array[i] > max) max = array[i];
    }
}

int main() {
    int arr[] = {45, 12, 78, 23, 56, 5, 90};
    int n = 7;
    int min_val, max_val;
    
    minmax(arr, n, min_val, max_val);
    
    cout << "Minimum: " << min_val << endl;
    cout << "Maximum: " << max_val << endl;
    
    return 0;
}
