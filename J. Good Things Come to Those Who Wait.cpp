#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 50
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    long long int i,j,cas=0,ts,ans,k,n,m,min_v,max_v,x;
   // FI;
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld",&n);
        min_v=9999999999999,max_v=1;
        for(i=0;i<n;i++){
            scanf("%lld",&x);
            if(x<min_v) min_v=x;
            if(x>max_v) max_v=x;
        }
        ans=min_v*max_v;
        printf("Case %lld: %lld\n",++cas,ans);
    }
    return 0;
}

