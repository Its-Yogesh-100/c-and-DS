#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
{
    // creating a newnode;

    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    // or
    //  tail=temp;
    tail = tail->next;
}

void InserAtPosition(Node *&head,Node*&tail,  int position,int data)
{
    //  insertion at head

    if(position==1)
    {InsertAtHead(head,data);
     return;}


    // insertion at middle
     

    Node *temp = head;

    int count=1;
    while(count<position-1){

        temp=temp->next;
        count++;
    }


    //Inserting at last node
    if(temp->next==NULL){
        InsertAtTail(tail,data);
    }
    // creating a node for data

    Node * nodemiddle=new Node(data);

    nodemiddle->next=temp->next;

    temp->next=nodemiddle;
    temp=nodemiddle; 

}

void print(Node *&head)
{
    // creating a new pointer
    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeleteNode(Node *&head,int position)
{
    // for first position
   if(position==1)
   {
    Node*temp=head;
     head=head->next;
     delete temp;
   } 
   else
   { 
    int count=1;
    while(count<position)
    {
        // deleting any middle node or last node

        Node * previous=NULL;
        Node* current= head;

        int cnt=1;
        while(cnt<position)
        {
            previous=current;
            current=current->next;
            current++;
        }
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }

        
   }
}

int main()
{
   
    // creating a new node
    Node *node1 = new Node(10);
    // head pointed to node1
    Node *head = node1;
    // creating a tail
    Node *tail = node1;

    print(head);

    //   InsertAtHead(head,30);

     InsertAtTail(tail, 20);
     InsertAtTail(tail, 30);
     InsertAtTail(tail, 40);

     print(head);
    
    InserAtPosition(head,tail,4,50);
    print(head);

    // DELETING NODE

    DeleteNode(head,5);

    print(head);

    return 0;
}

