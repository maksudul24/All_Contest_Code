#include<stdio.h>
int main()
{
    long long int a,b,c,n,max,sw=0,sw2=0,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        scanf("%lld",&b);
        if(a==b){
          sw=1;
        }
        scanf("%lld",&c);
        if(b==c){
                sw2=1;
        }
        if(sw==1 && sw2==1){
              printf("Case %d: Equilateral\n",i);

        }
        else if(sw==1 || sw2==1){
                   if(b==c){
                if(b+b>a){
                    printf("Case %d: Isosceles\n",i);
                    sw=2;
                }
            }
            else if(c==a){
                if(a+a>b){
                    printf("Case %d: Isosceles\n",i);
                    sw=2;
                }
            }
            else if(a==b){
                if(a+a>c){
                    printf("Case %d: Isosceles\n",i);
                    sw=2;
                }
            }
            if(sw!=2){
                printf("Case %d: Invalid\n",i);
            }

        }
        else{
            if(a>b && a>c){
                if(c+b>=a){
                    printf("Case %d: Scalene\n",i);
                    sw=2;
                }
            }
            else if(b>a && b>c){
                if(a+b>=b){
                    printf("Case %d: Scalene\n",i);
                    sw=2;
                }
            }
            else if(c>a && c>b){
                if(a+b>=c){
                    printf("Case %d: Scalene\n",i);
                    sw=2;
                }
            }
            if(sw!=2){
                printf("Case %d: Invalid\n",i);
            }

        }
        sw=0;
        sw2=0;
    }
    return 0;
}

