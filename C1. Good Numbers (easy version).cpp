#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 1000000000000000100
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    long long int i,j,cas=0,ts,ans,k,n,m,len=0;
   // FI;
   ara[len++]=1;
   i=3;
   while(i<=SIZE){
        ara[len++]=i;
        i*=3;
   }
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        low=0;
        high=len;
        while(high>low){
            mid=(high+low)/2;
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

