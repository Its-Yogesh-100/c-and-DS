#include<bits/stdc++.h>

using namespace std;


int duplicate(int arr[],int size){

    sort(arr,arr+size);

    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }


    return 0;


}



int main()
{
    int arr[5]={10,20,30,40,30};

    // int k=duplicate(arr,5);

    int k=2^2^6;

    cout<<k;
    // cout<<k;
return 0;
}