/* enqueue / dequeue and other oprations
1.  circular increment concept...
i=i+1;
i=(i+1)%size;

2.Enqueue steps :-
- check that the condition of queue overflow or not .
- And do circular increment of q->r.
- And puttiing down value which you are inserting.

3.Dequeue operation 
- Check wether a queue is empty or not
- circular increment 
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue 
{
    int size;
    int f;
    int r;
    int *arr;
}q;
int isempty(struct queue *p){
    if(p->r==p->f){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct queue *p)
{
    if((p->r+1)%p->size==p->f)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *p,int val){
    if(isFull(p))
    {
        cout<<"queue is full "<<endl;
    }
    else{
        p->r=(p->r+1)%p->size;
        p->arr[p->r]=val;
    }
}
int dequeue (struct queue *p){
    int a=-1;
    if(isempty(p))
    {
        return 1;
    }
    else{
        p->f=(p->f+1)%size;
        p->arr[p->f]=val;
    }
}
int main()
{
    q.size=10;
    q.f=q.r=0;
    q.arr=(int *)malloc()
}
