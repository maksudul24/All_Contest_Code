#include<stdio.h>
#define STACK_MAX 100
typedef struct{
    int top;
    int data[STACK_MAX];
} Stack;
void push(Stack *n,int item)
{
    if(n->top<STACK_MAX){
        n->data[n->top]=item;
        n->top=n->top+1;
    }
    else printf("Stack is full\n");
}
int pop(Stack *n)
{
    int item;
    if(n->top==0){
        printf("stack is Empty\n");
        return -1;
    }
    else{
        n->top=n->top-1;
        item=n->data[n->top];
    }
    return item;
}
int main()
{
    Stack my;
    int item;
    my.top=0;
    push(&my,1);
    push(&my,12);
    push(&my,13);
    push(&my,20);
    while(1){
        item=pop(&my);
        if(item==-1) break;
        printf("%d\n",item);
    }
}
