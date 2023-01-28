#include <bits/stdc++.h>
using namespace std;

void Pair()
{
    // pair (data_type1, data_type2) Pair_name (value1, value2) ;

    // some other ways to initialize pairs

    pair<int, int> p;
    p.first = 20;
    p.second = 35;

    cout << p.first << " " << p.second << endl;

    // to store varoius elements

    pair<int, pair<int, int>> pp = {1, {3, 4}};

    cout << pp.first << endl;
    cout << pp.second.first << endl;
    cout << pp.second.second << endl;

    // some more examples

    pair<int, pair<int, pair<int, int>>> k = {10, {20, {30, 40}}};

    cout << "k=" << k.first << endl;
    cout << "k.second.first=" << k.second.first;

    cout << "\nk.second.second.first = " << k.second.second.first << endl;

    cout << "\nk.secondsecond.second =" << k.second.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << arr[0].first << endl;

    cout << arr[0].second << endl;
}

void Vectors()
{

    vector<int> v;

    v.push_back(10);

    cout << v.size() << endl;

    // function emplace_back
    // this function is similar to push_back functino it dynamically increase its size and push bak
    // emplace-back is generally faster tham pushback

    v.emplace_back(100);
    cout << v.size() << endl;

    cout << v[0] << endl;

    //********************

    // vector of pair data type

    vector<pair<int, int>> vec;

    vec.emplace_back(55, 66);

    cout << vec[0].first << endl;

    vec.push_back({45, 68});
    cout << vec[1].first << endl;

    // vector to declare a lots of elements with fixed size

    vector<int> s(2, 6);

    cout << "Vector s " << s[0] << endl;

    // how to copy one vector in another vector

    vector<int> v1(s);

    // How u can access the elements of vector

    // v[0];

    // other way is iterator

    //******************************************************

    // iterator is a kind of pointer that is pointing at the base address of the vector

    // let me create a simple vector

    vector<int> y;
    y.push_back(10);
    y.push_back(30);
    y.emplace_back(50);
    y.emplace_back(5656);

    // declaration

    // it is pointing towards the base address of vector

    //*(it) tells value at particular address in memeory

    vector<int>::iterator it = y.begin();

    cout << "it[0] " << *it << endl;

    it++;

    cout << "it[1] " << *it << endl;

    it += 2;

    cout << "it " << *it << endl;

    ////////another iterator

    // vector<int>::iterator it = y.end();

    // remember it iterator in this is not pointing towards the end element of memory

    // so end in this points to the memory location that is right after the last element

    // vector<int>::iterator it=y.rend();

    // now this iterator will run reversely if i press i++ then it moves one back element in array

    // vector<int>:: iterator it=y.rbegin();

    //*******************************************************

    cout << y[0] << " " << y.at(0) << endl;

    // cout < "y.back" << y.back() << endl;

    cout << "y.back " << y.back() << endl;

    // accessing the value of vector using loop and iterator

    for (vector<int>::iterator it = y.begin(); it != y.end(); it++)
    {

        cout << " " << *(it) << " ";
    }

    // another sortcut to write this is

    // auto helps to write data type if you dont know about that data type

    cout << endl;
    for (auto it = y.begin(); it != y.end(); it++)
    {
        cout << *(it) << " ";
    }

    // another way is to print is for each loop

    for (auto it : y)
    {
        cout << it << " ";
    }

    //**********************************************************************************
}

void VectorsDeletion()
{

    vector<int> v(5, 56);

    cout << endl;
    for (auto it : v)
        cout << it << ' ';
    cout << endl;

    // Now we will talk about the erase function in vectors

    v.erase(v.begin() + 1);

    // another way to delete elements from the vector

    v.erase(v.begin() + 2, v.begin() + 4);
}

void Vector_other_func()
{
    // INSERT FUNCTION IN VECOTROS

    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin(),500);

    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;


    // Another way to print the function in the array

    v.insert(v.begin()+1,2,23);

    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;

    // How u cna insert a vector inside another vector in c++

    vector<int>c1={50,50};

    v.insert(v.begin(),c1.begin(),c1.end());

    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;

    // v.size() tells u how many elements in vector

    cout<<v.size()<<endl;

    v.swap(c1);

    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;


  v.clear();


  cout<<v.empty()<<endl;









}

int main()
{
    //Vectors();

    // VectorsDeletion();

    Vector_other_func();
    return 0;
}
