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

void InsertAtHead(Node*&tail,int element,int data)
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

        while(current->data!=element){
            current=current->next;
        }

        Node *newnode=new Node(data);

        newnode->next=current->next;
        current->next=newnode;
    }
}
void print()
{

}
int main()
{
    
    Node* tail=NULL;
    
    
return 0;
}