#include<stdio.h>
int main()
{
    int ara[1000],x;
    ara['q']=120;
    char line[]="q";
    x=ara[line[0]];
    printf("%d\n",x);
    return 0;
}
