#include<stdio.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int x)
{
    node *temp=(*node)malloc(sizeof(struct node));
    temp-> data=x;
    temp->next=NULL;
    if(head!=NULL) temp->next=head;//head er addreaa ta nibe.
    head=temp;//temp er address head e boshabe
}
void print()
{
    node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;

    }
}
int main()
{

}
