#include <bits/stdc++.h>
using namespace std;

class Queue
{

public:
    int *arr;
    int front;
    int rare;
    int size;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rare = 0;
    }

    void enqueue(int data)
    {
        if(rare==size)
        {cout<<"OVERFLOW"<< endl;}
        else{

            arr[rare]=data;
            rare++; 
        }
    }

    int dequeue()
    {
        if(front==rare)
        {
            cout<<"UNDERFLOW"<<endl;
        }
        else
        {
            int ans=arr[front];
            cout<<"deleted element is "<<ans<<endl;
            arr[front]=-1;
            front++;

            if(front==rare)
            {
                front=0;
                rare=0;
            }

            return ans;
        }

    
    }

    int fronti()
    {
        if(front==rare)
        return -1;
        else

        {
            cout<<"\nelement at front is ";
        return arr[front];}    }


    bool isempty()
    {
        if(front==rare)
        {
            cout<<"\nQueue is empty ";

             return true;
        }
       
        else

        {
            cout<<"\nQueue is not empty ";
            return false;
        }
    }

};

int main()
{
    Queue q(5);
    
    q.enqueue(10);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<q.dequeue();
    cout<<q.fronti();

    cout<<q.isempty();


    return 0;
}