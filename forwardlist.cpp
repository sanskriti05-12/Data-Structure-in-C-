#include<iostream>
using namespace std;
#include<forward_list>;
int main(){
forward_list<int>f;
f.push_front(12);
f.push_front(43);
f.push_front(23);
f.push_front(100);
f.push_front(50);
forward_list<int>f2;
f2.push_front(1);
f2.push_front(4);
f2.push_front(24);
f2.push_front(5);
f2.push_front(6);
cout<<"\n list 1 \n";
for(auto p:f)
{
    cout<<p<<"\t";
}
for(auto p:f)
{
    // cout<<p<<"\t";g
}
}