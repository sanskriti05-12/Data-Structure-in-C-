#include<iostream>
using namespace std;
class top
{
    public:void insertsort(int arr[],int s)
    {
        for (int i=1;i<s;i++){
            int chotu=i;
            while(chotu>0 && arr[chotu]<arr[chotu-1]){
                int tmp;
                tmp=arr[chotu-1];
               arr[chotu-1]=arr[chotu];
               arr[chotu]=tmp;
               chotu--;
            }
        }
    };
};
int main(){
top p;
int a[]={5,4,3,2,1};
int s=sizeof(a)/sizeof(a[0]);
for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
    p.insertsort(a,s);
    cout<<"\n after applying \n";
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"\t";
        }
}
