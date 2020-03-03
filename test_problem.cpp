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
    int i,j,n,cas=0,ts;
    ll int ans;
    scanf("%d",&ts);
    while(ts--){
            ans=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            ans+=n/i;
        }
        printf("Case %d: %lld\n",++cas,ans);
    }
    return 0;
}

