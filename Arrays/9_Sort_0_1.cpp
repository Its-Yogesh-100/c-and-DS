 #include<bits/stdc++.h>
 using namespace std;


 void sort0_1(int arr[],int size)
 {

     int i=0;
     int j=size-1;

     while(i<j)
     {
        while (arr[i]==0 && i<j)
            i++;

         while (arr[j]==1 && i<j)
            j--;


        // yaha arr[i]==1 and arr[j]==0

    if(i<j)
        swap(arr[i],arr[j]);
        i++;
        j--;
        
           
     }   
 }



 int main()
 {
 int arr[]={1,1,0,0,0,1,0,1,0};

 int size=sizeof(arr)/sizeof(arr[0]);

  sort0_1(arr,size);

  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
 return 0;
 }