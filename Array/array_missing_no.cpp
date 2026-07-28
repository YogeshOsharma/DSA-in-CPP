#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "enter n:";
    cin >> n;
    int arr[n];
    cout << "enter  " << n-1  << "  elemnents " << endl;
    for(int i=0;i<n-1;i++){
        cout << "enter element " << i+1 << endl;
        cin >> arr[i];
        sum += arr[i];
    }
    int total = (n*(n+1))/2;
    cout << "missing no is :" << total - sum << endl;
    return 0;
}