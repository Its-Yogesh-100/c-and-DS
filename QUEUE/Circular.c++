#include<bits/stdc++.h>
using namespace std;
    

class Cqueue{
    public:
    int *arr;
    int front;
    int rare;
    int size;


    Cqueue(int size)
    {
        this->size=size;

        arr=new int[size];
        front=0;
        rare=0;
    }

    void enqueue(int data)
    {
        if(front==0 && rare==size-1 || rare==front-1)
        {
            cout<<"Queue is full"<<endl;
        }
        else if(rare==front-1){
            cout<<"Queue is full "<<endl;
        }
        else if(rare==size-1 && front!=0)
        {
            rare=0;
            arr[rear]=data;

        }
        else{

            arr[rare]=data;
            rare++;
        }
    }
    bool isempty()
    {

        if(front==0 && rare==size-1)
        {

        }
    }


};
int main()
{
int arr[]={ };
    
return 0;
}