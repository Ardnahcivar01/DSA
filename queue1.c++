// Implementing queue using Array using c++ language .
#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue
{
    int size;
    int front,rear;
    int *arr;
};
int is_Empty(struct queue *q)
{
    if(q->front==q->rear)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int is_Full(struct queue *q)
{
    if(q->rear==q->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q,int val)
{
    if(is_Full(q))
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        q->rear++;
        q->arr[q->rear]=val;
    }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if(is_Empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        q->front++;
       a= q->arr[q->front];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size=10;
    q.front=q.rear=-1;
    q.arr=(int *)malloc(q.size*sizeof(struct queue));
   
   // check again the queue is empty or not
   if(is_Empty(q))
{
    cout<<"Queue is empty"<<endl;
}

    // insert the elements
    enqueue(&q,1);
    enqueue(&q,2);
 
 if(is_Full(q))
 {
    cout<<"Queue is full"<<endl;
 }

 // now dequeue the elements
    dequeue(&q);
    dequeue(&q);

}
