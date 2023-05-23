#include<iostream>
using namespace std;
typedef struct stack
{
    int size;
    int top;
    int *arr;
}Stack_Node;

Stack_Node * create_stack(int size)
{
    Stack_Node* stack = new Stack;
    stack->size=size;
    stack->top==-1;
    stack->arr = new int(size);
    return stack;
}

// Function to check a stack is full or not
bool stack_full(Stack_Node* stack)
{
    if(stack->top==stack->size-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Fumction to check a stack is empty or not
bool stack_empty(Stack_Node* stack)
{
    if(stack->top== -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// now making function to push element in stack

void push_in_stack(Stack_Node* stack,int element)
{
    if(Stack_Node* stack,int element)
    {
        cout<<"Stack is over-flow";
    }
    else
    {
        stack->arr[stack->top++]=element;
    }
}

// now making function to pop element and return poped element

void pop_in_stack(Stack_Node* stack)
{
    if(stack->top= -1)
    {
        cout<<"stack is underflow ";
    }
    else
    {
        return(stack->arr[stack->top--]=element);
    }
}

// function of moment of disk
void Move_disk(int disk,char from ,char to)
{
    cout<<"Move a disk "<<disk<<" from "<<from<<" to "<<to<<endl;
}

void tower_of_hinoi(int number_of disk,struct Stack *from_rod,struct Stack *aux_rod,struct Stack *to_rod)
{
    
}

int main()