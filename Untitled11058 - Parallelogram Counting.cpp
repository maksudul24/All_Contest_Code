#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1020
using namespace std;

struct axis{
    int x,y;
};

struct ara{
    int x1,x2,y1,y2;
    double dis;
};

bool aracomp(ara ls,ara rs) { return ls.dis>rs.dis; }

int main()
{
    int i,j,n,cas=0,ts,x1,y1,x2,y2,dis,cnt;
    FI;
    ara a[SIZE];
    axis ar[SIZE];
    scanf("%d",&ts);
    while(ts--){
         for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            ar[i]={x,y};
        }
        cnt=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                dis=((ar[i].x-ar[j].x)*(ar[i].x-ar.[j].x))-((ar[i].y-ar[j].y)*(ar[i].y-ar[j].y));
                dis=sqrt(dis);
                a[cnt++]={ar[i].x,ar[j].x,ar[i].y,ar[j].y,dis};
            }
        }
        sort(a,a+cnt,aracomp);
        for(i=0;i<cnt;i++){

        }
        printf("Case %d: %d\n",++cas,);
    }
    return 0;
}
