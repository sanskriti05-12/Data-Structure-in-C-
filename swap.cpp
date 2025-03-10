#include<iostream>
using namespace std;
#include <array>
int main()
{
    array<int ,5>arr1{45,2,3,17};
    array<int ,5>arr1{40,98,23,12,9};
    arr1.swap(arr2);
    for(auto p1:arr1)
    {
        cout<<p1<<"\t";
    }
     cout<<"/n arr2 \n";
     for(auto p2:arr2)
     {
        cout<<p2<<"\n";
     }

}