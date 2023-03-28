#include<bits/stdc++.h>
using namespace std;


int binaryss(int *arr,int size,int key)

{
    int start=0;

    int end=size-1;

    int mid= start+(end-start)/2;

    


    while(start<=end)
    {
        if(key==arr[mid])
          return mid;

       if(key>arr[mid])
        {
            start=mid+1;
        }

        else
          end=mid-1;


          mid=start+(end-start)/2;
    }
    return -1;

}

    
int main()
{

    int size=5;
    int key=50;
int arr[size]={ 10,20,30,40,50};

int k=0;

clock_t start, end;
  
    
start = clock();

 k= binaryss(arr,size,key);

int i=INT_MAX;

 k=binaryss(arr,size,key);
 end = clock();

cout<<k<<endl;


double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(6);
    cout << " sec " << endl;
    
return 0;
}