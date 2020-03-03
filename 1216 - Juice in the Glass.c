#include<stdio.h>
#include<math.h>
int main()
{
    int r1,r2,h,p,temp,i,n;
    double v,r,pi;
    pi=2*acos(0.0);
    pi=pi/(double)3;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%d %d %d %d",&r1,&r2,&h,&p);
            temp=h-p;
            r=(double)temp/h;
            r=r*(r1-r2);
            r=r1-r;
            v=(r*r)+(r2*r)+(r2*r2);
            v=v*pi*p;
            printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
