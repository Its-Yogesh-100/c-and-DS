#include<bits/stdc++.h>
using namespace std;
    
// 


class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void InsertAtHead(Node* &head,int data)
{
    // creating a newnode;

    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void print(Node* &head)
{
   // creating a new pointer
   Node * temp=head;

   while(temp!=NULL){

    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl;
 
}

int main()
{

// creating a new node
  Node *node1=new Node(20);
// head pointed to node1
  Node* head=node1;

  print(head);

  InsertAtHead(head,30);
  print(head);

 
    
return 0;
} 