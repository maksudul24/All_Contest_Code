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

using namespace std;

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp;
    FI;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&m);
        if(n<m){
            if(n>3){
                printf("YES\n");
            }
            else if(n>1){
                if(n==m || m==3){
                    printf("YES\n");
                }
                else printf("NO\n");
            }
            else if(m==1) printf("YES\n");
            else printf("NO\n");
        }
        else printf("YES\n");

    }
    return 0;
}
