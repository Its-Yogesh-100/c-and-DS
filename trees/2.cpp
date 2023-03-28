#include<bits/stdc++.h>
using namespace std;
    
int main()
{

string s ="gbw";





for(int i=0;i<s.length();i++)
{
    if(int(s[i])<=int(s[i+1]))
        cout<<s[i]<<" "<<int(s[i])<<endl;

    else
      {cout<<s[i]<<" not comparable "<<endl;
        break;  
    }
}
    
return 0;
}