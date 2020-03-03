#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double pi,r,cir,sq,ans;
    scanf("%d",&n);
    pi=2*acos(0.0);
    for(i=1;i<=n;i++){
            scanf("%lf",&r);
            printf("Case %d: %0.2f\n",i,(4*r*r)-(pi*r*r)+1e-9);
    }
    return 0;
}
