#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    ll int i,j,n,cas=0,ts,x,ans,num,temp,d;
   // freopen("in.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld",&n);
        ans=0;
        for(i=2;i<=n/2;){
            temp=n/i;
            num=n/temp;
            d=(num-i+1);
            x=2*i+d-1;
            x=(d*x)/2;
            ans+=(temp-1)*x;
            i=num+1;
        }
        printf("Case %lld: %lld\n",++cas,ans);
    }
    return 0;
}

