// In this program implementing Circular linked list using c++ .

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
// traversal function for circular linked-list
void linked_list_traversal(struct Node *head)
{
    struct Node *ptr=head;
    do{
        cout<<"element is :"<<ptr->data;
        ptr=ptr->next;
    }while (ptr!=head);
}

// insertion function in circular linked-list 
struct Node * insert_at_firstNode(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while(ptr->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
// main function is :
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

    // link second to third node
    second->data = 11;
    second->next = third;

    // link third node to null ptr

    third->data = 10;
    third->next = fourth;

    fourth->data = 12;
    fourth->next=NULL;

// calling of functions 
  cout<<" circular linked-list before insertion:";
    linked_list_traversal(head);
    head=insert_at_firstNode(head,8);
  cout<<"circular linked-list after insertion";
  linked_list_traversal(head);

}
