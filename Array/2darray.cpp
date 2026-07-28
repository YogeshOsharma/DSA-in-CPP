#include<iostream>
using namespace std;
int main(){
int aar1[4][4]={1,2,3,4,5,6,7,8,9,2,4,6,8,4,8,2};
int aar2[4][4]={5,5,7,8,4,7,9,3,5,6,7,2,3,5,7,9};

int rowsum=0;
int temp=0,index;

for (int i=0;i<4;i++)
{
    for (int j=0;j<4;j++)
    {
        int a=aar1[i][j]+aar2[i][j];
        cout<<a<<" ";
        temp+=a;
        if(j==3)
        {
            if(temp>rowsum)
            {
                rowsum=temp;
                index=i;
            }
            temp=0;
            cout<<endl;
        }
        a=0;
            
    }
}

cout<<endl;
cout<<"row with highest sum is "<<rowsum<<" and index of that row is "<<index;
return 0;
}