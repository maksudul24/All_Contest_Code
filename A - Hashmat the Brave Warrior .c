#include<stdio.h>
int main()
{
    int a,b;
    while( != EOF){
        scanf("%d %d",&a,&b);
        a=a-b;
        printf("%d\n",a);
    }
    return 0;
}
