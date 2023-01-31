#include<bits/stdc++.h>
using namespace std;



    
int main()
{
  
  int t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;



    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int sum=0;
    int kk=1;
    for(auto i=v.begin();i!=v.end();i++)
    {
        sum+=kk+*i;
    }
    cout<<sum;
  }
    
return 0;
}