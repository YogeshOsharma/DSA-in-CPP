#include<iostream>
using namespace std;
int main(){
int arr[1000];
int n;
cout << "enter n:";
cin >> n;
cout << "enter " <<n << " elements :";
for (int i=0;i<n;i++){
    cin >> arr[i];
}

for (int i=n-2;i>=0;i--){
    bool swapped =0;

    for (int j=0;j<=i;j++){
        if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=1;
        }
    }
    if (swapped==0){
        break;
    }
}

cout <<"sorted array is :";
for (int i=0;i<n;i++){
    cout << arr[i] <<" ";
}
return 0;
}