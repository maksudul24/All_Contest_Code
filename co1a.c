#include<stdio.h>
int main()
{
    int a,b,c,s,sum,n,i;

    i=1;
                scanf("%d %d %d",&a,&b,&c);
                s=0.5*(a+b+c);
                sum=((a+b+abs(a-b)))/2;
                printf("Case %d: %d\n",i,sum);
    return 0;
}
