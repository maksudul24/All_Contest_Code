#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int ts,l,d,r,ans;
   // freopen("in.txt","r",stdin),FO;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d %d",&l,&r,&d);
        if(l>d) ans=d;
        else{
            ans=r/d;
            if(ans<=0) ans=d;
            else ans=(ans+1)*d;
        }
        printf("%d\n",ans);
    }
    return 0;
}
