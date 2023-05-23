// This program is to implement the stack using array.
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};

struct stack * creatstack(int data){
    struct stack * stack = (struct stack *)malloc(sizeof(struct stack));
    stack->size = size;
    stack->top = -1;
    stack->arr = (struct stack *)malloc(sizeof(struct stack));
    return stack;
}

int isFull(stacut stack *stack){
    if(stack->top == stack->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *stack){
    if(stack->top == -1)
    {
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack *stack , int data){
    if(isFull(stack)){
        printf("\n stack is overflow\n");
    }
    else{
        stack->arr[stack->top++] = data;
        printf(" \n %d pushed to stack \n");
    }
}

int pop (struct stack *stack){
    int a = -1;
    if(isEmpty(stack)){
        printf("stack is underflow");
    }
    else{
        a = stack->arr[stack->top--];
    }
    return a;
}

int peek(struct stack *stack){
    return stack->arr[stack->top];
}

int main(){
    struct stack* s = creatstack(100);
    push(stack,10);
    push(stack,12);
    push(stack,23);
    printf("%d poped from stack \n",pop(stack));

    return 0;
}
