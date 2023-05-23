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

int isempty(struct queue *p)
{
    if (p->r == p->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *p)
{
    if ((p->r+1)%p->size ==p->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *p, int value)
{
    if (isFull(p))
    {
        cout << "queue is Full" << endl;
    }
    else
    {
        cout<<"enqueue element is :"<<value<<endl;
       p->r=(p->r+1)%p->size;
       p->arr[p->r]=value;
    }
}
int dequeue(struct queue *p)
{
    int a = -1;
    if (isempty(p))
    {
        cout << "this queue is full" << endl;
    }
    else
    {
      p->f=(p->f+1)%p->size;
      a=p->arr[p->f];
    }
    return a;
}
int main()
{
    struct queue p;
    p.size = 4;
    p.f = p.r = -1;
    p.arr = (int *)malloc(p.size * sizeof(int));

    if (isempty(&p))
    {
        cout << "quese is empty" << endl;
    }
    // enqueue few elements
    enqueue(&p,12);
    enqueue(&p, 4);
    enqueue(&p, 5);
    enqueue(&p, 6);
 
    if (isFull(&p))
    {
        cout << "Queue is Full " << endl;
    }

    // dequeue the elements 
    cout<<"dequeing  element are: "<<dequeue(&p)<<endl;
    cout<<"dequeing the element are: "<<dequeue(&p)<<endl;

    if(isempty(&p))
    {
        cout<<"Queue is empty"<<endl;
    }
    if(isFull(&p))
    {
        cout<<"Queue is full"<<endl;
    }
    return 0;
}