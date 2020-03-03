#include<stdio.h>
int fun(int a, int b)
{
    int x,gcd;
    if(a<b){
            x=a;
    }
    else{
        x=b;
    }
    for(;x>=1;x--){
            if(a%x == 0 && b%x==0){
                gcd=x;
                break;
            }
    }
    return gcd;
}
int main()
{
    int n,i,j,gcd;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            gcd=fun(i,j);
            printf("%d\n",gcd);
        }
    }
    return 0;
}
