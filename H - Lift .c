#include<stdio.h>
int main()
{
    int a,b,i,x,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            x=0;
            scanf("%d %d",&a,&b);
            if(a!=0){
                x=a-b;
                if(x<0){
                    x=x*(-1);
                }
                x=x*4;
                x=x+(4*a)+19;
            }
            printf("Case %d: %d\n",i,x);
    }
    return 0;
}
