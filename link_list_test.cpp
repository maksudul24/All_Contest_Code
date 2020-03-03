#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define strck struct node
using namespace std;
struct node{
    int data;
    strck *next;
};
strck *avail(int n,strck *addrss)
{
    strck new_node=(strck *) malloc(sizeof(strck));
    if(new_node==NULL){
        printf("Error\n");2
        exit(1);
    }
    new_node->data=n;
    new_node->next=addrss;
    return new_node;
}
strck *appnd(int n,stck *head)
{
    strck *temp=avail(n,head);
    if(head==NULL){
        return temp;
    }
    strck *new_temp=head;
    while(new_temp->next!=NULL) new_temp=new_temp->next;
    new_temp->next=temp;
    return head;
}
void prnt(strck *head)
{
    strck *preak=head;
    while(preak->next!=NULL){
            printf("%d ",preak->data);
            preak=preak->next;

    }
    return;
}
int main()
{
    stck *n;
    n=appnd(10,NULL);
    n=appnd(20,n);
    n=appnd(30,n);
    n=appnd(40,n);
    prnt(n);
    return 0;

}
