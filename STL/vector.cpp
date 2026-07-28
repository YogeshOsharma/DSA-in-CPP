#include<iostream>
#include <algorithm>
using namespace std;

int main()
{

vector<int> v={48,2,64,72,746,32,2309,88,2,2,0};
v.push_back(90);
for (int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
//increasing order sort
sort(v.begin(),v.end());
for (int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
//decreasing order sort
sort(v.begin(),v.end(),greater<int>());
for (int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
//copy 1 vector in another

vector<int>vnew;
vnew=v;
cout<<endl<<vnew.capacity()<<"    "<<v.capacity();
cout<<endl;
cout<<v.size()<<"    "<<vnew.size();
cout<<endl;

//more ways to print vector 
for(auto i:vnew)
{
    cout<<i<<" ";
}
cout<<endl;
//find count 
auto it = *max_element(v.begin(),v.end());
cout<<it;
return 0;

}