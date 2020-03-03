#include<stdio.h>
#include<math.h>
int main(){
    int a1,a2,b1,b2,c1,c2,d1,d2,ans,x,y,i,n;
    double m,o;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2);
            d1=(a1+c1)-b1;
            d2=(a2+c2)-b2;
            x=(a1-b1);
            y=(a2-b2);
            x=(x*x)+(y*y);
            m=sqrt(x);
            x=(b1-c1);
            y=(b2-c2);
            x=(x*x)+(y*y);
            o=sqrt(x);
            printf("%.1lf %.1lf\n",m,o);
            ans=(m*o);
            printf("Case %d: %d %d %d\n",i,d1,d2,ans);
    }
    return 0;
}

