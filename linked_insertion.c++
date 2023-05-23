// Insertion in linked list using c++ .
#include<iostream>
#include<stdlib.h>
using namespace std;
 struct Node 
 {
    int data;
    struct Node * next;
 };

 void traversel(struct Node *ptr)
 {
    while(ptr!=NULL)
    {
        cout<<"element is :"<<ptr->data<<endl;
        ptr =ptr->next;
    }
 }
 struct Node * insert_at_head(struct Node *head ,int data)
 {
    struct Node * ptr=(struct Node *) malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data = data;
    return ptr;  
 }
 // when inserting in between 
 struct Node * insertatindex(struct Node *head , int data ,int index){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while (i!=index-1)
    {
        p =p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
 }
 // when iserting at the end 
 struct Node * insert_at_end(struct Node *head ,int data)
 {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
 }
 // inserting after a node 
 struct Node * insert_after_node(struct Node *head ,struct Node *prevNode,int data)
 {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
 }

 int main()
 {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocatr memory in heap bcs it is dynamic memory allocation

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and secind node
    head->data = 7;
    head->next = second;

    // link seconf to third node
    second->data = 11;
    second->next = third;

    // link thied node to null ptr

    third->data = 10;
    third->next = fourth;

    fourth->data=15;
    fourth->next = NULL;

    traversel(head);
    cout<<"now the updated list is :"<<endl;
    head = insert_at_head(head,100);
    // head = insertatindex(head,200,2);
    // head = insert_at_end(head,34);
    head = insert_after_node(head,second,10000);
    traversel(head);
 }
