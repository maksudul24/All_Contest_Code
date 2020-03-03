#include<stdio.h>
int main()
{
    int n,cnt,m,x,y;
    scanf("%d",&n);
    cnt=n;
    m=n%3;
    while(1){
        x=n/3;
        cnt=cnt+x;
        if(x==0){
            break;
        }
        y=n%3;
        if(y==2){
            cnt++;
        }
        n=x+y;
    }
    printf("%d\n",cnt);
    return 0;
}
