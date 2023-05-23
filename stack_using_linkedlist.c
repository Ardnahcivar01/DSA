// This is program to implementing linkedlist using Stack.
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top = NULL;

typedef struct node Node;

int isEmpty(Node *top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(Node *top){
    Node *p = (Node *)malloc(sizeof(Node));
    if(p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Node *push(Node *top,int value)
{
    if(isFull(top)){
        printf("Stack is empty\n");
    }
    else{
        Node *newNode;
        newNode = (struct node *)malloc(sizeof( struct node));
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        printf("\nNew Node is inserted");
        return top;
    }
}

int pop(Node *top)
{
    if (isEmpty(top))
        printf("\nStack OverFlow");
    else
    {
        Node *temp = top;
        int x = temp->data;
        top = top -> next;
        free(temp);
        return x;
    }
}

void display(Node *top)
{
    if(top == NULL)
        printf("\nStack Underflow");
    else
    {
        printf("\nThe Stack is \n");
        Node *temp = top;
        while(temp -> next != NULL)
        {
            printf("%d -->", temp->data);
            temp = temp -> next;
        }
        printf("%d -->NULL", temp->data);
    }
}

int main()
{
    int element;
    Node *top = NULL;

    top = push(top,10);
    top = push(top,20);
    top = push(top,30);
    top = push(top,40);
    display(top);
    element = pop(top);
    printf("\n%d", element);
    return 0;
}
