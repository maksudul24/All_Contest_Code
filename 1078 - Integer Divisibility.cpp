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
    int i,j,n,cas=0,ts,a,cnt,temp;
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
            cnt=1;
        scanf("%d %d",&n,&a);
        temp=a;
        while(1){
            if(n>a){
                cnt++;
                a=a*10+temp;
            }
            else{
                if(a%n==0) break;
                else a=a%n;
            }
        }
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
