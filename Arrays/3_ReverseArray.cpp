#include<iostream>
using namespace std;

int* reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {

        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    

    return arr;
    cout<<arr;
}



void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}



int main()
{
    
    int arr[]={10,20,30,40,50};
    int size=5;

    int *p;
    p=reverse(arr,size);

    printarr(p,size);


    


return 0;
}