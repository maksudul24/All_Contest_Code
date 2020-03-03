//code hint: all the number divided n greater than n/2 is 1;
//from one divisor to next divisor found by,
// dividing n by first divisor multiple it by (next divisor - divisor) with answer.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,cas=0;
    long long int ans=1,ara[200000],x,h,temp,a,n,b,i;
    scanf("%d",&k);
    while(k--){
        b=1,ans=0,temp=0;
        scanf("%lld",&n);
        temp=n;
        ans=0;
        for(i=1;i*i<=n;i++){
            x=n/i;
            a=(temp-x)*b;
            ans+=a+x;
            temp=x;
            b=i;
        }
        h=sqrt(n*1.0);
      //  cout<<"h "<<h<<" x "<<x<<endl;
        if(x>h){
            x=n/i;
            x=(temp-x)*x;
         //   cout<<"l_div "<<l_div<<" min_v "<<min_v<<endl;
            if(x>0) ans+=x;
        }

        printf("Case %d: %lld\n",++cas,ans);

    }
    return 0;
}
