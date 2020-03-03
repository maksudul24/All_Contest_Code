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
    int i,n,cas,x,y;
    ll int ans=0;   // freopen("in.txt","r",stdin);
    scanf("%d %d",&n,&cas);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x!=cas) ans+=y;
    }
    printf("%I64d\n",ans);

    return 0;
}

