#include<bits/stdc++.h>
using namespace std;
    
int main()
{

vector<int>v={1,2};

vector<int> k={3,4};


k.insert(k.end(),v.begin(),v.end());


sort(k.begin(),k.end());

for(auto it:k)
cout<<it<<" ";

cout<<endl;

cout<<"size"<<k.size()<<endl;

if(k.size()%2==0){
   double qq,rr,pp;
   qq=k.size()/2;
   rr=(k.size()/2)-1;

    pp=(float)(k[qq-1]+k[rr+1])/2;

    cout<<"median"<<pp;

}
else{
    cout<< k[k.size()/2];
}
    
cout<<endl;

cout<<k[0];
return 0;
}