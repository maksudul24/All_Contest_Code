#include<stdio.h>
int big(int a,int b)
{
    if(b==0) return 1;
    int x=big(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",big(a,b));
}
