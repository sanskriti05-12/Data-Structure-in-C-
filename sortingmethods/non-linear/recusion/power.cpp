#include<iostream>
using namespace std;
int p(base,power)
{
    if(power==0){
        return 1;
    }
    return  base*p(power-1);

}
int main{
    cout<<"enter the base number";
    cin>>base;
    cout<<"enter a power";
    cin>>power;
    p(base,power)
}