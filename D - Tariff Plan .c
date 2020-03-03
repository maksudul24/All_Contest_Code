#include<stdio.h>

int ml_fun(int x)
{
    int n,money;
    n=x/60;
    money=15*n;
    n=x%60;
    if(n>=0){
        money=money+15;
    }
    return money;
}
int jc_fun(int x)
{
    int n,money;
    n=x/30;
    money=10*n;
    n=x%30;
    if(n>=0){
        money=money+10;
    }
    return money;
}


int main()
{
    int mile,juice,n,i,j,k;
    scanf("%d",&k);
    for(j=0;j<k;j++){
            mile=0;
            juice=0;
            scanf("%d",&n);
            int sec[n];
            for(i=0;i<n;i++){
                scanf("%d",&sec[i]);
                mile=ml_fun(sec[i])+mile;
                juice=jc_fun(sec[i])+juice;

            }
            if(mile == juice){
                printf("Case %d: Mile Juice %d\n",j+1,mile);
            }
            else if(mile<juice){
                printf("Case %d: Juice %d\n",j+1,mile);
            }
            else{
                printf("Case %d: Mile %d\n",j+1,juice);
            }
    }
    return 0;
}
