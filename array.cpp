#include<iostream>
#include<array>
using namespace std;
#include<algorithm>
int main(){
    array<int,5>v{4,3,2,1,9};
    // array<double,3>v2{23.4,56.4,98.2};
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v.at(i)<<"\t";
    // }
    // cout<<"\n";
    // for(auto p:v2)
    // {
    //     cout<<p<<"\t";
    // }
    cout<<"front="<<v.front()<<"\n";
    cout<<"end="<<v.back()<<"\n";
    sort(v.begin(),v.end());
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
   cout<< "size="<<v.size()<<"\t";
   cout<<v[3];
   //second largest

}