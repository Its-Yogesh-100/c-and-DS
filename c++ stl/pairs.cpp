#include<bits/stdc++.h>
using namespace std;


void Pair()
{

    
    // pair (data_type1, data_type2) Pair_name (value1, value2) ;

    // some other ways to initialize pairs

    

    pair<int,int>p;
    p.first=20;
    p.second=35;

    cout<<p.first<<" "<<p.second<<endl;


    // to store varoius elements

    pair<int,pair<int,int>>pp={1,{3,4}};

    cout<<pp.first<<endl;
    cout<<pp.second.first<<endl;
    cout<<pp.second.second<<endl;


    // some more examples

    pair<int,pair<int,pair<int,int>>> k={10,{20,{30,40}}};


    cout<<"k="<<k.first<<endl;
    cout<<"k.second.first="<<k.second.first;

    cout<<"\nk.second.second.first = "<<k.second.second.first<<endl;


    cout<<"\nk.secondsecond.second ="<<k.second.second.second<<endl;





    pair<int,int>arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[0].first<<endl;

     cout<<arr[0].second<<endl;

    


    }
int main()
{
    Pair();
return 0;
}