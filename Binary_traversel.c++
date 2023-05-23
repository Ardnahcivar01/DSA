// In this program implementing Binary tree traversel .
#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int data)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL; 
    n->right=NULL;
    return n;
}

// preorder travesel function
void preeorder(struct node* root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        preeorder(root->left);
        preeorder(root->right);
    }
}
// post order traversal
void postorder(struct node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
        
    }
}
// in order traversal 
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}

int main()
{
    struct node *p=create(4);
    struct node *p1=create(1);
    struct node *p2=create(6);
    struct node *p3=create(5);
    struct  node *p4=create(2);
 
    // linking a node 
    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=NULL;
    p2->right=NULL;

    // call a preeorder function 
   preeorder(p);
   cout<<"\n";
   postorder(p);
   cout<<" "<<endl;
   inorder(p);
   cout<<"\n";
}
