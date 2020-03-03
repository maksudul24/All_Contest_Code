#include<stdio.h>
int main()
{
    int a=1,k,n,cas=0,i,cnt,b;
    double ans=1,ara[200300],x;
    ara[0]=0.00;
    for(i=2;i<=100000000;i++){
        ans+=1.0/(1.0*i);
        if(i%500==0) ara[a++]=ans;
    }
 //   printf("%d\n",a);
    scanf("%d",&k);
    while(k--){
            cnt=0;
        scanf("%d",&n);
        b=n%500;
        n=n/500;
        x=ara[n];
        n=n*500;
      //  printf("%lf %d\n",x,n);
        for(i=n+1;cnt<b;i++,cnt++) x+=1.0/(1.0*i);
        printf("Case %d: %0.8lf\n",++cas,x);

    }
    return 0;
}
