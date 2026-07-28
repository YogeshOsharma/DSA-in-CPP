#include<iostream>
using namespace std;
int main(){
int ans=INT_MIN;
int arr[5]={4,5,6,7,8};
for (int i=0;i<5;i++)
{
    if(arr[i]>ans)
    {
        ans=arr[i];
    }
}
cout<<ans;
return 0;
}