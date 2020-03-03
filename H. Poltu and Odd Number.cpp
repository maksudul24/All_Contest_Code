#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 210
#define uu first
#define vv second
#define pii pair<int,int>
#define dbg(a, args...) printf("Line:%d " a,__LINE__, ##args)

int main()
{
    ll int i,j,cas=0,ts,ans,n,m,temp;
  //  FI,FO;
    scanf("%lld",&ts);
    while(ts--){

       scanf("%lld %lld",&n,&m);
        n--;
        temp=n/2;
        if(n%2!=0) temp++;
        ans=m/2;
        if(m%2!=0) ans++;
        ans=ans*ans-temp*temp;
        printf("Case %lld: %lld\n",++cas,ans);

    }
    return 0;
}
