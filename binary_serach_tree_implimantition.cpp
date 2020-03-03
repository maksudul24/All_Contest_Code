#include<stdio.h>
#include<iostream>
using namespace std;
int siz,ara[1000];
void binary_tree(int n,int i)
{
    if(n==ara[i]) printf("The Item is In the Tree in\n");
    else if(n<ara[i]){
        if(ara[2*i]) binary_tree(n,2*i);
        else{
            ara[2*i]=n;
            siz=max(siz,2*i);
            printf("Parrent:%d, Entered Node:%d\n",i,2*i);
        }
    }
    else{
        if(ara[2*i+1]) binary_tree(n,2*i+1);
        else{
            ara[2*i+1]=n;
            siz=max(siz,2*i+1);
            printf("Parrent:%d,Entered Node:%d\n",i,2*i+1);

        }
    }
}
void print(int n)
{
    if(ara[2*n]) print(2*n);
    printf("%d ",ara[n]);
    if(ara[2*n+1]) print(2*n+1);
    return;
}
int main()
{
    int n,i,x;
    printf("The Number of Elements N: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(i) binary_tree(x,1);
        else{
            siz=1;
            ara[1]=x;
        }
    }
    printf("Inorder:\n")
    print(1);
    return 0;

}
