#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
// insertion from starting 
void insertion(struct node **head,int data)
{
    // alocating memory
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    // asigning data to newnode
    new_node->data = data;
    new_node->next = (*head);
    new_node->prev = NULL;

    if((*head)!= NULL)
    {
        (*head)->prev = new_node;
    }
    // head points to node 
    (*head) = new_node;
}
// inserting at between nodes
void insertBetween(struct node **head,int data){
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->prev =
}

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    // Allocating memory :
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four= (struct node *)malloc(sizeof(struct node));

    // Assigning values :
    one->data = 2;
    two->data = 4;
    three->data =6;
    four->data = 5;

    // linking all the nodes together :
    one ->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = four;
    three ->prev = two;

    four->next = NULL;
    four->prev = three;

    head = one;
}