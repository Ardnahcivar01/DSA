#include<iostream>
#include<queue>
using namespace std;
class node{
    public :int data;
    node* left;
    node* right;
    
// creating a function
node(int d){
    this->data =d;
    this->left = NULL;
    this->right = NULL;
}
};
node* build_tree(node* root){
    int data;
    cout<<"enter data :"<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter elements of left node :"<<endl;
    root->left = build_tree(root->left);
    cout<<"enter elememts of the right node "<<endl;
    root->right = build_tree(root->right);
    return root;
}
// level order traversel
void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL ){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// functions for traversel in binary tree
node* preeorder(node* root){
    if(root==NULL){
        return 0;
    }
    cout<<root->data;
    preeorder(root->left);
    preeorder(root->right);
}
 
node* postorder(node* root){
    if(root==NULL){
        return 0;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
node* inorder(node* root){
    if(root==NULL){
        return 0;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
// building a tree by any levelorder
node* build_level_order(node* root){
    queue<node*> q;
    int data;
    cout<<"Enter data :"<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);
    
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        
        cout<<"enter for left node "<<endl;
        int left_data;
        cin>>left_data;
        if(left_data == -1)
        {
            temp->left = new node(left_data);
            q.push(temp->left);
        }
        
        cout<<" enter for right node"<< endl;
        int right_data;
        cin>>right_data;
        if(right_data == -1)
        {
            temp->right = new node(right_data);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;
    build_level_order(root);
    /*
    root = build_tree(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // call the level traversel 
     levelorder(root);
     
     // calling the traversel function
     cout<<"prr-order travesel is :"<<endl;
     preeorder(root);
     cout<<"postorder travesel is :"<<endl;
     postorder(root);
     cout<<"inorder travesel is :"<<endl;
     inorder(root);
 */    
}