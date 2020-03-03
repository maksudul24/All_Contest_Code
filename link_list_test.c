#include<stdio.h>
#include<stdlib.h>
#define st struct node
struct node{
    int data;
    st *next;
};
st *create_new(int new_n,st *next)
{
    st *new_file=(st *) malloc(sizeof(st));
    if(new_file==NULL){
        printf("Error\n");
        exit(1);
    }
    new_file->data=new_n;
    new_file->next=next;
    return new_file;
}
st *append(int item,st *head)
{
    st *x=create_new(item,NULL);
    if(head==NULL){
            return x;
    }
    st *new_node=head;
    while(new_node->next!=NULL){
        new_node=new_node->next;//last value er obosthan ber kore tar next e x er address boshiye diyese.
    }
    new_node->next=x;
    return head;
}
st *prepand(int item,st *head)
{
    st *my=create_new(item,head);
    return my;
}
void printlist(st *head)
{
    st *temp;
    temp=head;
    while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
    }
    printf("\n");
}
int main()
{
    st *n;
    n=append(10,NULL);
    n=append(15,n);
    n=append(20,n);
    n=append(30,n);
    n=prepand(5,n);
    printlist(n);
    return 0;
}
