#include<stdio.h>
#include<stdlib.h>
#define stck struct node
struct node{
    int data;
    node *next;
};
stck *create(int item,stck *address)
{
    stck *new_file=(stck *)malloc(sizeof(stck));
    if(new_file==NULL){
        printf("Error creating new file\n");
        exit(1);
    }
    new_file->data=item;
    new_file->next=address;
    return new_file;
}
stck *append(int item,stck *add)
{
    stck *my=create(item,NULL);
    if(add==NULL) return my;
    stck *temp=add;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=my;
    return add;
}
stck *del(int item,stck *head)
{
    stck *temp,*pre,*post;
    temp=head,pre=head;
    if(temp->data==item) return temp->next;
    temp=temp->next;
    post=temp->next;
    while(temp!=NULL){
        if(temp->data==item){
            pre->next=post;
            printf("%d deleted from linked list\n",temp->data);
            return head;
        }
        if(temp->next!=NULL){
            pre=pre->next;
            temp=temp->next;
            post=post->next;//in the last session both of the pointer is NULL so we cant't assign a null pointer to a null pointer;
        }
        else  temp=temp->next;
    }
    printf("%d is not found on the list\n",item);
    return head;

}
stck *prepand(int item,stck *head)
{
    stck *temp=create(item,head);
    return temp;
}
stck *sorted(int item,stck *head)
{
    stck *my=create(item,NULL),*temp,*pre;
    temp=head;
    pre=head;
    if(item<temp->data){
        my->next=temp;
        return my;
    }
    temp=temp->next;
    while(temp!=NULL){
        if(item<temp->data){
            my->next=pre->next;
            pre->next=my;
            return head;
        }
        pre=pre->next;
        temp=temp->next;
    }
    pre->next=my;
    return head;

}
void print(stck *temp)
{
    stck *now;
    now=temp;
    printf("Linked list\n");
    while(now!=NULL)
    {
        printf("%d ",now->data);
        now=now->next;
    }
    printf("\n");
    return;
}
int main()
{
    stck *n;
    n=append(10,NULL);
    n=append(20,n);
    n=append(30,n);
    n=append(50,n);
    n=append(60,n);
    print(n);
    n=del(100,n);
    print(n);
    n=del(20,n);
    print(n);
    n=sorted(35,n);
    print(n);
    //
    return 0;
}
