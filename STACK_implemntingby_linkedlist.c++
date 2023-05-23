#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int value){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("New element pushed is : %d\n",value);
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is underflaow");
    }
    else{
        int data = ptr->arr[ptr->top];
        ptr->top--;
        printf("Poped element is :%d\n",data);
        return data;
    }
}
int main(){
    struct stack *st = (struct stack *) malloc(sizeof(struct stack));
    st->size = 10;
    st->top = -1;
    st->arr = (int *) malloc(st->size * sizeof(int));
    push(st,4);
    push(st,12);
    pop(st);
    return 0;
}