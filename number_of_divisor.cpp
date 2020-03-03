#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int div(ll int n);
int main()
{
    int i,j,n,cas=0,ts;
    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        printf("Case %d: %d\n",++cas,div(n));
    }
    return 0;
}
int div(ll int n)
{
    int limit=sqrt(n*1.0),cnt;
}
