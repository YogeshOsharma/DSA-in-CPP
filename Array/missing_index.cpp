#include<iostream>
using namespace std;
int main(){

int arr[8]={1,2,3,4,5,6,8,9};
int target=7;
int start = 1;
int end = 8;
int mid;
int index=8;
mid=(start+end)/2;
while (start<=end)
{
    mid=(start+end)/2;
    if(arr[mid]==target)
    {
        index=mid;
    }
    else if (arr[mid]<target)
    {
        start=mid+1;
    }
    else
    {
        index=mid;
        end=mid-1;
    }
    
}
cout<<index;
return 0;
}