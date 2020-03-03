#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 1000
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    int i,j,cas=0,ts,ans,cnt,n,m,prev,ara[SIZE],temp;
   // FI;
    scanf("%d",&ts);
    while(ts--){
        ans=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+n);
        for(i=1;i<n;i++){
            temp=ara[i]-ara[i-1];
            if(temp==1){
                ans++;
            }
        }
        if(!ans){
            ans=1;
        }
        else ans=2;
        printf("%d\n",ans);
    }
    return 0;
}

