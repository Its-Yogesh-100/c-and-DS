#include <bits/stdc++.h>
using namespace std;

// int fact(int num)
// {
//         if (num == 0)
//         {
//             return 1;
//         }

//         int smallp = fact(num - 1);
//         int large = num * smallp;

//         return large;
// }



// unsigned long long fact(int n)
// {
//     const unsigned int M = 1000000007;
 
//     unsigned long long int f = 1;
//     for (int i = 1; i <= n; i++)
//         f = (f*i) % M;  // Now f never can
//                         // exceed 10^9+7
//     return f;
// }


unsigned long long fact(int n)
{
	const unsigned int M = 1000000007;
	unsigned long long f = 1;

	for (int i = 1; i <= n; i++)
		f = f * i; // WRONG APPROACH as
					// f may exceed (2^64 - 1)

	return f % M;
}




int nCr(int n, int r){
        
    unsigned long long int w=fact(n);
    unsigned long long int a=fact(n-r);
    unsigned long long int k=fact(r);

    unsigned long long int ss=w/a;




    

    cout<<"w = "<<w<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"k = "<<k<<endl;
    cout<<"ss = "<<ss<<endl;
      
    unsigned long long int ans=ss*1/k;
       
       return ans;
}

int main()
{

       int k= nCr(15,3);
        
        cout<<k<<endl;
        return 0;



 }