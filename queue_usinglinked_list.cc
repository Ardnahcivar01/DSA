// This program is to implementing singl-linkdelist using queue 
#include<stdio.h>
#include<stdlib.h>
struct Node *f =NULL;
struct Node *r =NULL;
struct Node
{
    int data;
    struct Node *next;
};

void traversel(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr =ptr->next;
    }
}

void enqueue(struct Node *n,int info){
    struct Node *np=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Queue is full\n");
    }
    else{
        np->data=info;
        np->next=NULL;
        if(f==NULL)
        {
            f=r=np;
        }
        else{
            r->next=np;
            r=np;
        }
    }
}

int dequeue (struct Node *nq)
{
    int val = -1;
    struct Node *ptr = f;
    if(f == NULL)
    {
        printf("Qeueue is empty\n");
    }
    else{
        f=f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
 struct Node *n;
 
    enqueue(n,12);
    enqueue(n,34);
    enqueue(n,23);
    enqueue(n,50);

    // printing the dequeuing elements
    struct Node *nq;
    printf("dequeuing element is : %d\n",dequeue(nq));
    printf("dequeuing element is : %d\n",dequeue(nq));

    return 0;
}
