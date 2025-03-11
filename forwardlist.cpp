#include<iostream>
using namespace std;
int main(){
forward_list<int>f;
f.push_front(12);
f.push_front(43);
f.push_front(23);
f.push_front(100);
f.push_front(50);
for(auto p:f)
{
    cout<<p<<"\t";
}
}