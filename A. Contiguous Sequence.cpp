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
    int i,j,n,cas=0,ts,sw,x,y;
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
            sw=0,y=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&x);
            y=x-y;
            if(y==1 && i) sw=1;
            y=x;
        }
        if(sw) printf("Case %d: Yes\n",++cas);
        else printf("Case %d: No\n",++cas);
    }
    return 0;
}

