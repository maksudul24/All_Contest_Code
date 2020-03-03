#include<stdio.h>
#define size 10
typedef struct{
    int data[size+1];
    int head,tail;
} que;
void enque(que *n,int item)
{
    if(((n->tail+1) % (size+1))==n->head){
        printf("Queue is full\n");
        return;
    }
    n->data[n->tail]=item;
    n->tail=(n->tail+1)%(size+1);
}
int deque(que *n)
{
    int item;
    if(n->tail==n->head){
        printf("Queue id Empty\n");
        return 0;
    }
    item=n->data[n->head];
    n->head=(n->head+1)%(size+1);
    return item;
}
int main()
{
    que my;
    int x;
    my.head=my.tail=0;
    enque(&my,1);
    enque(&my,2);
    enque(&my,3);
    enque(&my,4);
    printf("%d\n",deque(&my));
    printf("%d\n",deque(&my));
    printf("%d\n",deque(&my));
     printf("%d\n",deque(&my));
     printf("%d\n",deque(&my));
     printf("%d\n",deque(&my));
     return 0;

}
