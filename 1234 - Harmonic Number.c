#include<stdio.h>
double ara[100000020];
int main()
{
    int cas=0,n,i,k,x;
    double ans=1;
    ara[1]=1.0000;
    scanf("%d",&k);
    for(i=2;i<=100000002;i++){
        ans+=1.0/(i*1.0);
        ara[i]=ans;
    }
    while(k--){
        scanf("%d",&x);
        printf("Case %d: %0.8lf\n",++cas,ara[x]);
    }
    return 0;
}
