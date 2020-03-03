#include<stdio.h>
int main()
{

    int a,b,c,n,t;
    double x;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b){
        printf("YES\n");
    }
    else{
            n=(b-a);
            if(c==0){
                if(a==b){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
                return 0;
            }
            t=(n/c);
            x=(double)n/c;
            x=x-t;
            if(x==0){
              if(t>0){
                printf("YES\n");
              }
              else{
                printf("NO\n");
              }
            }
            else{
                printf("NO\n");
            }
    }
    return 0;
}
