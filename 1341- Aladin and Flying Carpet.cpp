#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
ll int car(ll int a,ll int b);
int main()
{
    ll int i,j,n,cas=0,ts,a,b;
   // freopen("test.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld %lld",&a,&b);
        printf("Case %lld: %lld\n",++cas,car(a,b));
    }
    return 0;
}
ll int car(ll int a,ll int b)
{
    ll int limit=sqrt(a),cnt,i;
    double test_limit=sqrt(1.0*a);
    if(test_limit==limit) cnt=-1;
    else cnt=0;
    for(i=b;i<=limit;i++){
        if(a%i==0){
            if(a/i>=b) cnt++;
        }
    }
    return cnt;
}
