#include<stdio.h>
void hanoy(int n,int a,int b,int c)
{
    if(n>0){
        hanoy(n-1,a,c,b);
        printf("move a disk from %d to %d\n",a,c);
        hanoy(n-1,b,a,c);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    hanoy(n,1,2,3);
    return 0;
}
