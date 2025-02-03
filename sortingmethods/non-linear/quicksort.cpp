#include<iostream>
using namespace std;
int divide (int arr[],int low,int high)
{
    int pv=arr[low];//9
    int i=low+1;//1
    int j=high;   //4
    do
    {
        while(arr[i]<pv)
        {
            i++;
        }
        while(arr[j]>pv)
        {
            j--;
        }
        if(i<j)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

    }while(i<j);
    int temp;
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
} 
void qksort (int arr[],int low,int high)
{
    int pv;
    if(low<high);
    {
        pv=divide(arr,low,high);
        qksort(arr,low,pv-1);
        qksort(arr,pv+1,high);


    }
}

int main()
{
int arr[]={9,2,1,50,6};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++)
{
    cout<<"\n after quick sort\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}
}

//n log n avg/best case
// o(n)2 worst case
// quick sort is not stable for duplicate values