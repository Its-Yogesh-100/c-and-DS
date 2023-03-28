#include<bits/stdc++.h>
using namespace std;
    
class Node{

    public:
       int data;

       Node* left;
       Node* right;

       Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
       }
};



void inorder(Node* root)
{
    if (root->left==NULL)
    {
        return;
    }

    inorder(root->left);

    cout<<root->data<<" ";
    
    inorder(root->right);

    
}
Node* buildtree(Node* root)
{
    cout<<"Enter the data :"<<endl;

    int data;
    cin>>data;

    root=new Node(data);


    if(data==-1)
    {
      return NULL;
    }

    cout<<"Enter data for inserting left "<<endl;
    root->left=buildtree(root->left);

    cout<<"Enter data for inserting right "<<endl;
    root->left=buildtree(root->right);


    return root;

}


int main()
{
  Node* root=NULL;

  // creating a tree

  root=buildtree(root);


  cout<<" inorder traversal is :";

  inorder(root);
    
return 0;
}


