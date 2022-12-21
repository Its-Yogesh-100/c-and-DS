#include<bits/stdc++.h>
using namespace std;
    
int * SwapAlternate(int arr[],int size){


    for(int i=0;i<size;i+=2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

    return arr;

}
int main()
{

    
int arr[]={10,20,30,40,50};


int *p=SwapAlternate(arr,5);

for(int i=0;i<5;i++)
cout<<p[i]<<" ";
    
return 0;
}