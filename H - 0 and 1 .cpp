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
    int i,j,n,cas=0,ts,len,x,y;
    char ara[1000010];
    bool sw;
    while((scanf("%s",ara))!=EOF){
        scanf("%d",&n);
        printf("Case %d:\n",++cas);
        for(i=0;i<n;i++){
                sw=true;
            scanf("%d %d",&x,&y);
            if(x<y){
                j=x;
                len=y;
            }
            else{
                j=y;
                len=x;
            }
            for(;j<len;j++){
                if(ara[j]!=ara[j+1]){
                        sw=false;
                        break;
                }
            }
            if(sw) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}

