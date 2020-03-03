#include<stdio.h>
int main()
{
    int a,b,n,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sum);
        b=sum;
        a=sum;
        sum=sum/2;
        a=a-sum;
        b=b-a;
        printf("%d %d\n",a,b);
    }
    return 0;
}
