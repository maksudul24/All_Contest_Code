#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,k;
    int x=0;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&n);
        if(n>180000){
                   n=n-180000;
                if(n>0 && n<=300000){
                    x=n*0.1;
                }
                else if(n>=300000){
                    x=30000;
                }
                n=n-300000;
                if(n>0 && n<=400000){
                    x=(n*0.15)+x;
                }
                else if(n> 400000){
                    x=x+60000;
                }
                n=n-400000;
                if(n>0){
                    x=(n*0.25)+x;
                }
                if(x<2000){
                    x=2000;
                }

                m=x;
                printf("Case %d: %d\n",i+1,m);
        }
        else{
            m=0;
            printf("Case %d: %d\n",i+1,m);
        }
    }
    return 0;
}
