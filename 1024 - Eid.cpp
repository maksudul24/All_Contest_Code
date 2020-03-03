#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
ll int LCM(ll int,ll int);
int main()
{
    ll int i,j,n,cas=0,ts,x,y;
  //  freopen("test.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld",&n);
        scanf("%lld",&x);
        for(i=1;i<n;i++){
            scanf("%lld",&y);
            x=LCM(y,x);
        }
        printf("Case %lld: %lld\n",++cas,x);
    }
    return 0;
}
