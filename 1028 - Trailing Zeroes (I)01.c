#include<stdio.h>
#include<math.h>
int main()
{
    int n,cas=0,limit,i,cnt;
    long long int x;
    double y;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&x);
        cnt=0;
         y=sqrt(x*1.0);
        limit=sqrt(x*1.0);
         for(i=2;i<=limit;i++){
            if(x%i==0) cnt+=2;
         }
          if(limit-y) cnt++;
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}

