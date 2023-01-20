#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    // CONSTRUCTOR

    Node(int data)
    {

        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void InsertAtHead(Node *&head,Node*&tail, int data)
{   
    // if list is empty then
    if (head == NULL)
    {
        Node*temp=new Node(data);
        head=temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node*&head,Node*&tail, int data)
{
      if (head == NULL)
    {
        Node*temp=new Node(data);
        head=temp;
    }
    else{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        InsertAtHead(head,tail, data);
        return;
    }
    else
    {

        int count = 1;
        Node *temp = head;

        while (count < position - 1)
        {
            count++;
            temp = temp->next;
        }

        // inserting at last position
        if (temp->next == NULL)
        {
            InsertAtTail(head,tail, data);
            return;
        }

        // creating a newnode
        Node *newnode = new Node(data);

        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout << getLength(head) << endl;

    InsertAtHead(head,tail, 20);

    print(head);
    InsertAtTail(head,tail, 30);
    print(head);

    InsertAtPosition(head, tail, 1, 300);
    print(head);

    return 0;
}