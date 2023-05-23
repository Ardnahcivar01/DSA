#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *l;
    struct node *r;
};
struct node* crate(int data)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->l=NULL;
    n->r=NULL;
    return n;
}
void preeorder(struct node* root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        preeorder(root->l);
        preeorder(root->r);
    }
}
void postorder(struct node* root)
{
    if(root!=NULL)
    {
        postorder(root->l);
        postorder(root->r);
        cout<<root->data;
    }
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->l)
    }
}
int main()
{
    struct node *p=
}