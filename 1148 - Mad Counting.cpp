#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int ara[1000200];

int main()
{
    int i,j,n,cas=0,ts,x,temp;
    ll int ans;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        ans=0;
        for(i=0;i<n;i++){
                scanf("%d",&x);
                ara[x]++;
        }
        for(i=0;i<1000010;i++){
            if(ara[i]){
                temp=ara[i]/(i+1);
                if(ara[i]%(i+1)!=0) temp++;
                ans+=temp*(i+1);
            }
        }
        memset(ara,0,sizeof(ara));
        printf("Case %d: %lld\n",++cas,ans);
    }
    return 0;
}

