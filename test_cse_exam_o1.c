#include<stdio.h>
int main()
{
    int a,*y;
    a=15;
    y=&a;
    printf("*(&y)=%x &y=%x\n",*(&y),&y);
    return 0;
}
