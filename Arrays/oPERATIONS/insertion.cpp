#include <bits/stdc++.h>
using namespace std;

int * Insert_postion(int arr[], int n, int data,int position)
{

    for(int i=n-1;i>=position-1;i--)
    {
        arr[i]=arr[i+1];

    }
    n++;
    arr[position-1]=data;

    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return arr;

}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};



    int data = 45;

    int *p=Insert_postion(arr,5,data,2);

    for(int i=0;i<5;i++)
    cout<<*(p+i)<<" ";

    return 0;
}