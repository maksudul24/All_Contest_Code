#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

struct ara{
    int x1,x2,y1,y2,dis;
};

bool aracomp(ara ls,ara rs) { return ls.dis>rs.dis; }

int main()
{
    int i,j,n,cas=0,ts,x1,y1,x2,y2,dis;
    ara a[100];
    FI;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&dis);
        //a[i].x1=x1,a[i].x2=x2,a[i].y1=y1,a[i].y2=y2,a[i].dis=dis;
        a[i]={x1,y1,x2,y2,dis};

    }
    sort(a,a+n,aracomp);
    for(i=0;i<n;i++){
        printf("%d %d %d %d %d\n",a[i].x1,a[i].y1,a[i].x2,a[i].y2,a[i].dis);
    }

    return 0;
}
