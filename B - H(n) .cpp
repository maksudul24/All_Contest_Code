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
    ll int i,j,n,cas=0,ts,temp,num,ans,sw;
  //  freopen("in.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
            ans=0;
        scanf("%lld",&n);
        for(i=2;i<=n/2;){
            temp=n/i;
            num=n/temp;
            ans+=temp*(num-i+1);
            i=num+1;
        }

        if(n!=1) ans+=((n/2)+n+n%2);
        else ans=1;
        if(n<0) ans=0;
        printf("%lld\n",ans);
    }
    return 0;
}

