#include<stdio.h>
#include<math.h>
int main()
{
        double pi,x,n;
        int i=1,k;
        pi=3.1416;
        scanf("%d",&k);
        for(i=1;i<=k;i){
                scanf("%Lf",&n);
                x=(4*(n*n))-(pi*(n*n))-(10^-9);
                printf("Case %d: %0.2lf\n",i,x);
        }
        return 0;
}
