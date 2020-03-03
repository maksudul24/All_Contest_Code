#include<stdio.h>
#include<math.h>

int main()
{
    int a1,a2,b1,b2,o1,o2,i,n;
    double m1,m2,ang,r,x1,y1,x2,y2,PI,chq;
    PI=acos(-1.0);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
                scanf("%d %d %d %d %d %d",&o1,&o2,&a1,&b1,&a2,&b2);
                            if((b1-o2) && (a1-o1) && (b2-o2) && (a2-o1)){
                    m1=(1.0*(b1-o2)/(a1-o1));
                    m2=(1.0*(b2-o2)/(a2-o1));
                 //   printf("1:%lf %lf\n",m1,m2);
                }
                else{
                    if(b1-o2==0){
                        m1=0;
                    }
                    else if(a1-o1==0){
                        m1=0;
                    }
                    if(b2-o2==0){
                        m2=0;
                    }
                    else if(a2-o1==0){
                        m2=0;
                    }
                }
                if((m1-m2) && (1+(m1*m2))){
                        ang=((m1-m2))/(1+(m1*m2));
                        ang=atan(ang);
                    //    printf("%lf\n",ang);
                    }

                else{
                    if(1+(m1*m2)){
                        ang=0;
                    }
                    else{
                        ang=PI/2.0;
                    }
                }
                r=((a1-o1)*(a1-o1))+((b1-o2)*(b1-o2));
                r=sqrt(r);
            //    printf("R:%lf\n",r);
                r=r*ang;
                if(r<0){
                    r=(-1.0)*r;
                }
                printf("Case %d: %lf\n",i,r);
    }
    return 0;



}
