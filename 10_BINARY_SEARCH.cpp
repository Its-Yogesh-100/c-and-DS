#include<bits/stdc++.h>
using namespace std;
    
int BinarySearch(int arr[],int size,int key)
{
    int left=0;
    int right=size-1;
    int mid=left+(right-left)/2;

    while(left<=right){

        if(key==arr[mid]){
             return mid;
        }

        else if(key>arr[mid])
        {
            left=mid+1;
        }

        else{
            right=mid-1;
        }
         mid=left+(right-left)/2;
    }
    return -1;
}

int main()
{
int arr[]={10,20,30,40,50,60};
int size=sizeof(arr)/sizeof(arr[0]);

int key=20;

int k=BinarySearch(arr,size,key);

cout<<k<<endl;
    
return 0;
}