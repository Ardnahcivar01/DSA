#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* creat(int new_data){
    node* temp = (node *)malloc(sizeof(node));
    temp->data = new_data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node* preorder(node* root){
    if(root!=NULL)
    {
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}
node* postorder(node* root){
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}

node* inorder(node* root){
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}
int main(){
    node* p= creat(1);
    node* p1=creat(2);
    node* p2=creat(3);
    node* p3=creat(4);
    node* p4=creat(5);
    node* p5=creat(6);
    node* p6=creat(7);
    
    // linking the nodes
    p->left = p1;
    p->right = p2;
    
    p1->left = p3;
    p1->right = p4;
    
    p2->left = p5;
    p2->right = p6;
    
    cout<<"preeorder traversel is :"<< endl;
    preorder(p);
    cout<< endl;
    cout<<endl;
    cout<<"post order traversel is :"<<endl;
    postorder(p);
    cout<< endl;
    cout<< endl;
    cout<<"in order traversel is :"<< endl;
    inorder(p);
    cout<< endl;
}