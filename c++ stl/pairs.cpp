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


void Vectors()
{
   
   vector<int>v;

   v.push_back(10);

   cout<<v.size()<<endl;

   // function emplace_back
   // this function is similar to push_back functino it dynamically increase its size and push bak
   // emplace-back is generally faster tham pushback

   v.emplace_back(100);
   cout<<v.size()<<endl;

   cout<<v[0]<<endl;

   //********************

   // vector of pair data type

    vector<pair<int,int>>vec;

    vec.emplace_back(55,66);

    cout<<vec[0].first<<endl;

    vec.push_back({45,68});
    cout<<vec[1].first<<endl;


    // vector to declare a lots of elements with fixed size

    vector<int>s(2,6);

    cout<<"Vector s "<<s[0]<<endl;

    // how to copy one vector in another vector

    vector<int>v1(s);

    // How u can access the elements of vector

    // v[0];

    // other way is iterator









}
int main()
{
    Vectors();
return 0;
}