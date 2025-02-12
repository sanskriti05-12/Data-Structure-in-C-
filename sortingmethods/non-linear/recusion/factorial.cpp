#include <iostream>
using namespace std;
// void show(int a)
// {
//     if(a==0)
//     {
//         return;
//     }
//     cout<<a;
//     show(a-1);
// }
// int main(){
//  show(5);   
// }
// int fact(int a)
// {
//     int r;
//     if(a==0)
//     {
//         return 1;
//     }
//    r=a*fact(a-1);
//    return r;
// }
// int main(){
//  cout<<fact(5);   
// }
// int fib(int n)
// {
//     if(n==0||n==1){

//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     cout<<fib(n);
// }
void table(int n, int i=1)
{
    int n;
if( n>10)
{
    cout<<n*i;
}
table(n,i+1)

}
int main(){
   
   
    int n;
    cout<<"enter a table";
    cin>>n;
    
   
  cout<<table(n);
}