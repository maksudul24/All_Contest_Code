#include<stdio.h>
int main()
{
    int a,b,n,i,sum,a,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sum);
        t=sum;
        sum=a;
        sum=sum/2;
        a=a-sum;
        t=a-t;
        printf("%d %d\n",a,t);
    }
    return 0;
}
