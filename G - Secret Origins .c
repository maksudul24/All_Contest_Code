#include<stdio.h>
int binary(int n)
{
    if(n>0){
        n=n/2;
    }
    else{
        return 1;
    }
    return binary(n);
}

int main()
{
    int n,i,x,bin,count=0;
    scanf("%d",&n);
    x=binary(n);
    printf("binary:%d\n",x);
    while(x>0){
        bin=x/10;
        if(bin*10==x){
            count++;
        }
        x=x/10;
    }
    n=n-count;
    printf("Case %d: %d\n",i,n);
    return 0;
}
