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
void prnt(strck *head)
{
    strck *current_node=head;
    while(current_node!=NULL){
        printf("%d ",current_node->data);
        current_node=current_node->next;
    }
    printf("\n");
}
int main()
{
    strck *n;
    n=append(10,NULL);
    n=append(15,n);
    n=append(20,n);
    n=append(30,n);
    n=prepand(5,n);
    printf("Link list\n");
    prnt(n);
    return 0;
}
