#include<stdio.h>
int main()
{
    int x,n,y;
    scanf("%d",&x);
    if(x){
        y=x%10;
        x=x/10;
        n=x%10;
        if(y>5){
            n++;
        }
        x=x/10;
        x=x*100+n*10;
    }
    printf("%d\n",x);
    return 0;
}
