#include<bits/stdc++.h>
using namespace std;
    

class Node{

    public:
    Node* next;
    int data;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};

void InsertAtHead(Node*&tail,int data)
{
    // if list is empty
    if(tail==NULL)
    {
        Node*newnode=new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{

        Node*current=tail;
        
    }
}
void print()
{

}
int main()
{
    Node * node1=new Node(10);

    Node* tail=node1;
    
return 0;
}