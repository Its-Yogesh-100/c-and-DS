






#include<bits/stdc++.h>
using namespace std;
    

int Duplicate(int arr[],int size)
{
    int ans=0;

    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }


    for(int i=1;i<size;i++)
     ans=ans^i;

      
    return ans;

}


int main()
{
int arr[7]={ 10,20,30,40,2,99,30};

 int d=Duplicate(arr,7);

 cout<<d;
     
return 0;
}