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
    int ans,k,n,m,a,b,s,ts,temp;
    FI;
   scanf("%d",&ts);
    while(ts--){
        scanf("%d %d %d %d",&a,&b,&n,&s);
        ans=s/n;
        if(a>=ans) temp=ans*n;
        else temp=a*n;
        ans=s-temp;
        if(b>=ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

