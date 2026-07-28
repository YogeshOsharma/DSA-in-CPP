#include<iostream>
using namespace std;
int main(){
int a=10 ;
int b = 20;
int c = 30;
int d = 40;
int *ptr=&a;
cout<<*ptr<<endl;
cout<<&a<<endl;
ptr = &b;
cout<<ptr<<endl;
cout<<*ptr;

ptr = &c;
cout<<ptr<<endl;
cout<<*ptr;

ptr = &d;
cout<<ptr<<endl;
cout<<*ptr;

cout<<endl;
cout<<sizeof(ptr); 

return 0;
} 