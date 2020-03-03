#include<stdio.h>
#include<math.h>
int main()
{
   long long int u,s,a,i,n,temp;
    double t,x,t1,t2;

    scanf("%lld",&n);
    for(i=0;i<n;i++){
                scanf("%lld %lld %lld",&u,&a,&s);
                temp=(4*u*u)+(8*a*s);
                x=sqrt(temp);
                t1=-(2*u)+x;
                t1=t1/(2*a);
                t2=-(2*u)-x;
                t2=t2/(2*a);
                if(temp<0){

                    t=0;
                    printf("%0.6lf\n",t);

                }
                else{
                    if(t1<0){
                            t=t2;
                            printf("%0.6lf\n",t);
                        }
                        else if(t2<0){
                            t=t1;
                            printf("%0.6lf\n",t);
                        }
                }
    }
    return 0;
}
