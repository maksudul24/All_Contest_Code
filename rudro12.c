#include <stdio.h>
int main ()
{
    double x,y,a1,a2,b1,b2,c1,c2;
    scanf("%lf",&a1);
    scanf("%lf",&b1);
    scanf("%lf",&c1);
    scanf("%lf",&a2);
    scanf("%lf",&b2);
    scanf("%lf",&c2);
    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-a1*b2-a2*b1);
    printf("x=%0.2lf,y=%0.2lf",x,y);
    return 0;
}
