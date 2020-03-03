#include<stdio.h>
int main()
{
    int n,b=0;
    scanf("%d",&n);
            b=n/5;
            n=n%5;
            b=n/4+b;
            n=n%4;
            b=n/3+b;
            n=n%3;
            b=n/2+b;
            n=n%2;
            b=n+b;
    printf("%d\n",b);
    return 0;
}
