#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "STACK overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
    }

    bool isempty()
    {

        if (top == -1)
            return 1;
        else
        {
            cout<<"Stack is not empty";
            return 0;
        }
            
    }
};

int main()
{
   Stack st(5);

   st.push(30);
   st.push(44);

   st.pop();
   st.pop();

   cout<<st.peek();

   cout<<st.isempty();
    return 0;
}