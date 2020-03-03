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
    int i,j,n,x,y,d,m;
   // freopen("in.txt","r",stdin);
    scanf("%d %d %d",&n,&d,&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        if((x+y>=d) && (x+y<=(2*n-d)) && (x-y<=d) &&(x-y>=-d)){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}

