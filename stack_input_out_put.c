#include<stdio.h>
#define SIZE 2000
typedef struct{
    int top;
    int ara[SIZE];
} stck;
void push(stck *temp,int n)
{
    if(temp->top<SIZE){
        temp->ara[temp->top]=n;
        temp->top=temp->top+1;
    }
    else printf("Stack id full\n");
}
int pop(stck *n)
{
    int item;
    if(n->top>0){
        n->top=n->top-1;
        item=n->ara[n->top];
        return item;
    }
    else{
        printf("Stack is Empty\n");
        return 0;
    }
}
int main()
{
    int command,x;
    stck n;
    n.top=0;
    printf("Enter 0 to exit\n\n1.push data\n2.pop data0.exit\n");
    while(1)
    {
        printf("com:");
        scanf("%d",&command);
        if(command==1){
            printf("Enter the value\n");
            scanf("%d",&x);
            push(&n,x);
        }
        else if(command==2)
        {
            x=pop(&n);
            if(x) printf("Item is %d\n",x);
        }
        else if(command==0) break;
        else printf("Please Enter a valid command\n");
    }
    return 0;
}
