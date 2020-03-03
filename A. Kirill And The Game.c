#include<stdio.h>
int main()
{
    int l,r,x,y,k,a,b;
    scanf("%d %d %d %d %d",&l,&r,&x,&y,&k);
    a=k*x;
    b=k*y;
    if((a>=l && a<=r) || (b>=l && b<=r)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
