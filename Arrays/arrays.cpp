



//  creation

#include<iostream>
using namespace std;


// printing arrays 

void printarr(int arr[],int size)
{

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={10,20,30,40};
    cout<<arr[1]<<" ";

    cout<<endl;

    int size=sizeof(arr)/sizeof(arr[0]);

    printarr(arr,size);

    cout<<sizeof(arr);

return 0;
}

