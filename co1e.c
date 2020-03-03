#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float pi,r;
    pi=2*acos(0.0);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f",&r);
        r=(4*r*r)-(pi*r*r);
        r=r+(10^-9);
        printf("Case %d: %0.2f\n",i,r);
    }
    return 0;
}
