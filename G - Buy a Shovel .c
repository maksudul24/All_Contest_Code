#include<stdio.h>
int main()
{
    int n=0,m,a,d;
    scanf("%d %d",&a,&d);
    if(a%10==0){
        n=a/10;
    }
    else{
        while(m){
            n++;
            m=n*a;
            if(m%10==0){
                break;
            }
            m=m%10;
            m=m-d;
        }
    }
    printf("%d\n",n);
    return 0;
}
