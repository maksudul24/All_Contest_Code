#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1000010
using namespace std;

int ara[SIZE];

int main()
{
    int i,j,n,cas=0,ts,m,max_v,total,max_ara,len;
   //  freopen("in.txt","r",stdin),FO;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&m);
        max_v=INFINITY;
        total=0;
        max_ara=0;
        len=(n/m)+(n%m);
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            if(ara[i]>max_ara) max_ara=ara[i];
            total+=ara[i];
            if(i>=n-m){
                    if(total<max_v) max_v=total;
                    total-=ara[i-len+1];
            }
        }
        if(max_ara>max_v) max_v=max_ara;
        printf("Case %d: %d\n",++cas,max_v);
    }
    return 0;
}
