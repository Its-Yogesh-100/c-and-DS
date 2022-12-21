






#include<bits/stdc++.h>
using namespace std;
    

void PairSum(int arr[],int size,int sum)
{
    
    vector<int> v;

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                v.push_back(arr[i]);
                v.push_back(arr[j]);
            }
        }
    }

    for(auto e:v)
    cout<<e<<" ";

}


int main()
{
int arr[7]={1,2,3,4,5,6,7};


  PairSum(arr,7,5);

     
return 0;
}