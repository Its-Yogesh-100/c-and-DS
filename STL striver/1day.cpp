#include<bits/stdc++.h>
using namespace std;
    

int fact(int n)
{

    if(n==0)
    return 1;

    return n*fact(n-1);
}

int koo(int arr[],int size)
{
    int sum=0;
    bool w;
    for(int i=0;i<size;i++){

        

        if(sum<arr[i])
        {
           w=true; 

           cout<<" sum = "<<sum<<" "<<arr[i]<<endl;


        }
        else{
            w=false;

            cout<<"else ---> sum "<<sum<<endl;
            break;
        }

        sum+=arr[i];
    }
    
    return w;
}


void substr(string s)
{

    do{
        cout<<s<<endl;


    }
    while(next_permutation(s.begin(),s.end()));

}




void convertToWave(int arr[], int n){



    for(int i=1;i<n;i=i+2)

            swap(arr[i-1],arr[i]);


         for(int i=0;i<n;i++)
         {
            cout<<arr[i]<<" ";
         }

      }


void maximumNumber(string s, int k)
    {
        vector<char>ss;

        
        for(int i=0;i<s.length();i++)

            ss.push_back(s[i]);


            sort(ss.begin(),ss.end(),greater<int>());
            for(auto i:ss)
            cout<<i<<" ";
            cout<<endl;


             string str(ss.begin(), ss.end());

            
            cout<<str;

        
     }



int main()
{

clock_t start,end;

start=clock();
int arr[]={1,2,3,4,5};


//convertToWave(arr,5);

string s="1100";

maximumNumber(s,2);
end=clock();

cout<<endl;

double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(6);
    cout << " sec " << endl;
    

 

return 0;
}