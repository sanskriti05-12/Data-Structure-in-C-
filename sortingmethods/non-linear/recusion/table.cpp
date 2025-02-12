#include<iostream>
using namespace std;
void table(int n,int c=1)
{
    if(c>10)
    {
        return;
    }
    cout<<n*c<<"\t";
    table(n,c+1);
}
int main(){
    int n;
    cout<<"enter a table number";
    cin>>n;
    table(n);
}