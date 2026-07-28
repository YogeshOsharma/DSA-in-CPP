#include<iostream>
using namespace std;
int main(){
int arr[4][4]={1,2,3,4,5,6,7,8,9,2,4,6,8,3,5,7};

int sum1=0,sum2=0;

int r=0,c=3;
for(int i=0;i<4;i++)
{
    for (int j=0;j<4;j++)
    {
        cout<<arr[i][j]<<" ";
        if(i==j)
        {
            sum1+=arr[i][j];
        }
        
        if(i==r&&j==c)
        {
            sum2+=arr[i][j];
            r++;
            c--;
        }
        if(j==3)
        {
            cout<<endl;
        }
    }
}
cout<<endl;
cout<<"sum of diagonal 1 is : "<<sum1<<endl;
cout<<"sum of diagonal 2 is : "<<sum2;
return 0;
}