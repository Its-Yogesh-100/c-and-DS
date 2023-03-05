
// question that will need to find the unique elements

#include<bits/stdc++.h>
using namespace std;
    


int main()
{

int arr[5]={10,20,30,4,5};

vector<int> s(begin(arr),end(arr));

for(auto it:s)
cout<<it<<" ";
return 0;
}