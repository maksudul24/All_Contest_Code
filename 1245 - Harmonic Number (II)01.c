//code hint: all the number divided n greater than n/2 is 1;
//from one divisor to next divisor found by,
// dividing n by first divisor multiple it by (next divisor - divisor) with answer.

#include<stdio.h>
int main()
{
    int a=1,k,n,cas=0,i,cnt,b;
    int ans=1,ara[200300],x,h,temp;
    scanf("%d",&k);
    while(k--){
            cnt=0;
        scanf("%d",&n);
        temp=n;
        b=n%500;
        n=n/500;
        x=ara[n];
        n=n*500;
      //  printf("%lf %d\n",x,n);
        for(i=n+1;cnt<b;i++,cnt++) x+=1.0/(1.0*i);
        h=x*temp;
        printf("Case %d: %0.8lf\n",++cas,h);

    }
    return 0;
}
