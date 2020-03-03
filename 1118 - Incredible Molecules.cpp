#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
#define PI 3.14159265
using namespace std;
int main()
{
    int cas=0,k,x1,x2,y1,y2,r1,r2;
    double d,a,angle,area,b,temp;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        d=(double)((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
        temp=d;
        d=sqrt(d);
        a = (r1*r1 - r2*r2 + temp ) / (2*d);
      //  printf("%lf %d\n",d,r1+r2);
        if(d>0 && r1+r2>d && r1>a && d-a<r2){
            angle=acos(a/(1.0*r1));
            b=(r1*r1-a*a);
            b=sqrt(b);
          //  printf("a:%lf b:%lf\n",a,b);
            area=(r1*r1*angle)-(a*b);
         //   printf("Angle2: %lf,Area: %lf\n",angle,area);
            a=d-a;
            angle=acos(a/(1.0*r2));
            b=(r2*r2)-(a*a);
            b=sqrt(b);
            area+=(r2*r2*angle)-(a*b);
         //  printf("Angle2: %lf,Area: %lf\n",angle,area);
        }
        else if(r1+r2>d && r1>0 && r2>0){
            if(r1>r2){
                area=PI*r2*r2;
            }
            else area=PI*r1*r1;
        }
        else area =0;

        printf("Case %d: %0.6lf\n",++cas,area);
    }
    return 0;
}

