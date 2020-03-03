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
   ll int i,j,n,cas=0,ts,x,ans;
   // freopen("in.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld",&n);
        x=1,ans=0;
        for(i=2;x;i++){
            x=n/i;
            if(!x) break;
            ans+=(i*(x-1));
            printf("i:%lld,x:%lld,ans:%lld,total:%lld\n",i,x,i*(x-1),ans);
        }
        printf("Case %lld: %lld\n",++cas,ans);
    }
    return 0;
}

