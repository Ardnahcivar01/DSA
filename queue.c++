#include <iostream>
#include <stdlib.h>
using namespace std;

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        cout << "queue is Full" << endl;
    }
    else
    {
        cout<<"enqueue element is :"<<value<<endl;
        q->r++;
        q->arr[q->r] = value;
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        cout << "this queue is full" << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isempty(&q))
    {
        cout << "quese is empty" << endl;
    }

    // enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 4);
    enqueue(&q, 6);
 
    if (isFull(&q))
    {
        cout << "Queue is Full " << endl;
    }

    // dequeue the elements 
    cout<<"dequeing  element are: "<<dequeue(&q)<<endl;
    cout<<"dequeing the element are: "<<dequeue(&q)<<endl;

    if(isempty(&q))
    {
        cout<<"Queue is empty"<<endl;
    }
    if(isFull(&q))
    {
        cout<<"Queue is full"<<endl;
    }
    return 0;
}