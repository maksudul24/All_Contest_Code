#include<stdio.h>
int main()
{
    int a,b,*x,*y;
    a=15;
    x=&a;
    printf("a=%x, &a=%x x=%x *x=%x\n",a,&a,x,*(&(*(x))));
    return 0;
}
