#include<stdio.h>
int main()
{
    int i,m,n,k;
    long int x;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
            scanf("%d %d",&n,&m);
            n=n/2;
            x=m*n;
            printf("Case %d: %ld\n",i,x);
    }
    return 0;

}
