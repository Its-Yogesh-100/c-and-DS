

//  creation

#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    cout<<arr[1]<<" ";

    cout<<endl;

    for(int i:arr)
    {
        cout<<i<<" ";
    }

    cout<<sizeof(arr);
return 0;
}