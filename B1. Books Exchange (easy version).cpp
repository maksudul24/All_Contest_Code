
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 210000
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;
int ara[SIZE],cnt,mark[SIZE],target;

void fun(int n)
{
        cnt++;
        if(target==ara[n]){
                mark[target]=cnt;
                return;
        }
        fun(ara[n]);
        mark[ara[n]]=cnt;
}

int main()
{
    int i,j,cas=0,ts,ans,k,n,temp;
    FI;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        memset(mark,-1,sizeof(mark));
        for(i=1;i<=n;i++){
                cnt=0;
            if(mark[i]==-1){
                target=ara[i];
                fun(ara[i]);
                ans=mark[i];
            }
            else ans=mark[i];
            printf("%d",ans);
            if(i!=n)  cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
