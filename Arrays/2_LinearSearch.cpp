


// Searching in array

int SEarching(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }

        if(i==size)
        {
            return 0;
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};

    int key=30;

   int k= SEarching(arr,5,30);

   cout<<"key at index"<<k;


return 0;
}