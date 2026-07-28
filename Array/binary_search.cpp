#include<iostream>
using namespace std;
int main(){

int arr[6]={1,2,3,3,3,5};
int target=3;
int start =0;
int end =5;
int first=-1,last=-1,mid;

while(start<=end)
{
    mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        first = mid;
        end = mid-1;
    }
    else if (arr[mid]<target)
    {
        start=mid+1;
    }
    else 
    {
        end=mid-1;
    }
}

cout<<"first occurrence ="<<first;

start=0;
end=5;

while(start<=end)
{
    mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        last = mid;
        start = mid+1;
    }
    else if (arr[mid]<target)
    {
        start=mid+1;
    }
    else 
    {
        end=mid-1;
    }
}

cout<<"\nlast occurrence ="<<last;

return 0;
}