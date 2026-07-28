#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int *ptr = arr;
//print address of first element 
cout<<ptr<<endl;
cout<<arr+0<<endl;
cout<<&arr[0]<<endl;
cout<<arr<<endl;

cout<<endl;
cout<<endl;

//print address of second element
cout<<&arr[1]<<endl ;
cout<<arr+1<<endl;

cout<<endl;
cout<<endl;
//print the value of firts index
cout<<arr[0]<<endl;
cout<<*arr<<endl;
cout<<*(arr+0)<<endl;
cout<<*ptr<<endl;

cout<<endl;
cout<<endl;

//saare address ko print kar do
for (int i=0;i<5;i++)
{
    cout<<arr+i<<"  ";
}
cout<<endl;
cout<<endl;

//print all the value  

for (int i=0;i<5;i++)
{
    cout<<*(arr+i)<<"  ";
}

return 0;
}