#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[10]={0,1,2,2,0,1,1,0,2,};
int n = sizeof(arr) / sizeof(arr[0]);
std::sort(arr, arr + n);

int i;
for(i=0;i<10;i++)
{
    cout<<"["<<arr[i]<<"]"<<" ";
    if(i==9){
    cout<<endl<<"peak index is"<<i<<endl;
    cout<<"element is : "<<arr[i];}
}

return 0;
}