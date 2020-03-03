#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,c1,c2,ca,cb,a,b,bn,tem1,tem2,tem3;
    double cx3,cy3,cx4,cy4;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    a=(x1-x2);
    b=(y1-y2);
    bn=(-1)*b;
    x3=(a*a)+(b*b);
    ca=x3*x3;
    cb=(-1)*x3*x3;
    tem1=x1*x1+y1*y1;
    tem2=x1*x2+y1*y2;
    c1=tem1-tem2;
    c2=tem2-tem1;
    tem1=b*c1-ca*bn;
    tem2=a*(ca-c1);
    tem3=a*(bn-b);
    cx3=tem1/tem3;
    cy3=tem2/tem3;
    x3=cx3;
    y3=cy3;
    tem1=b*c2-ca*bn;
    tem2=a*(ca-c2);
    tem3=a*(bn-b);
    cx4=tem1/tem3;
    cy4=tem2/tem3;
    x4=cx4;
    y4=cy4;
    if(x3==cx3 && x4==cx4 && y3==cy3 && y4==cy4){
        printf("%d %d %d %d\n",x3,y3,x4,y4);
        return 0;
    }
    tem1=b*c1-cb*bn;
    tem2=a*(cb-c1);
    tem3=a*(bn-b);
    cx3=tem1/tem3;
    cy3=tem2/tem3;
    x3=cx3;
    y3=cy3;
    if(x3!=cx3 || y3!=cy3){
        x3=-1;
        printf("%d\n",x3);
        return 0;
    }
    tem1=b*c2-cb*bn;
    tem2=a*(cb-c2);
    tem3=a*(bn-b);
    cx4=tem1/tem3;
    cy4=tem2/tem3;
    x4=cx4;
    y4=cy4;
    if(x4==cx4 && y4==cy4){
        printf("%d %d %d %d\n",x3,y3,x4,y4);
        return 0;
    }
    else{
        x3=-1;
        printf("%d\n",x3);
    }
    return 0;
}

