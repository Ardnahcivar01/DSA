#include<stdlib.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node *np;

np front1;
np rear1;
np front2;
np rear2;

void enqueue_1(int e){
    np p = (np)malloc(sizeof(struct node));
    p->data = e;
    p->next = NULL;
    p->prev = NULL;
    if(rear1 == NULL){
        rear1 = p;
        rear2 = p;
        front2 = p;
        front1 = p;
        return;
    }
    rear1->prev = p;
    p->next = rear1;
    rear1 = p;
    front1 = rear1;
    return;
}
void enqueue_2(int e){
    np p = (np)malloc(sizeof(struct node));
    p->data = e;
    p->next = NULL;
    p->prev = NULL;
    if(front2 == NULL){
      rear2 = p;
      front2 = p;
      front1 = p;
      rear1 = p;
      return;
    }
    rear2->next = p;
    p->prev = rear2;
    rear2 = p;
    front2 = rear2;
    return;
}
void dequeue-1(){
    int x;
    if(fromt)
}