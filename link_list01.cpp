#include<stdio.h>
#include<stdlib.h>
#define strck struct node
//typedef struct node strck;
struct node{
    int data;
    strck *next;
};
strck *create_node(int item,strck *next)  //the asterisk before function refers to return type.
{
    strck *new_node=(strck *) malloc(sizeof(strck));
    if(new_node==NULL){
        printf("Error! Could not create node\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
strck *prepand(int item,strck *head)
{
    strck *new_node=create_node(item,head);
    return new_node;
}
strck *append(int item,strck *head)
{
    strck *new_node=create_node(item,NULL);
    if(head==NULL){
        return new_node;
    }
    strck *current_node=head;
    while(current_node->next!=NULL){
        current_node=current_node->next;
    }
    current_node->next=new_node;
    return head;
}
int main()
{
    strck *n,*start;
    n=create_node(10,NULL);
    start=n;
    n=append(20,n);
    n=append(30,n);
    n=append(40,n);
    n=start;
    printf("Linked list\n");
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
    printf("\n");
    return 0;
}
