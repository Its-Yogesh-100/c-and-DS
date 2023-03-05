#include<bits/stdc++.h>
using namespace std;


    
int main()
{

  string S="i.like.this.program.very.much";

  int l=S.length();
        
        
        vector<char>vv;
        for(int i=0;i<S[i]!='\0';i++)
        {
            vv.push_back(S[i]);
        }
        
        
        for(auto it=vv.rbegin();it!=vv.rend();it++)
        {
            cout<<*it;
        }

        string str(vv.rbegin(),vv.rend());
       
    
return 0;
}