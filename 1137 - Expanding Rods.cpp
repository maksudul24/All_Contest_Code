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
    int i,j,cas=0,ts;
    double a,m,l,n,c,high,low,mid,x;
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%lf %lf %lf",&l,&n,&c);
        a=l*(1+n*c);
        low=n/2;
        high=1000000;
        while(high-low>0.001){
            mid=(high-low)/2;
            x=2*mid;
            x=x*(asin(n/x));
            if(x>a) high=mid;
            else low=mid;
            printf("%d\n",mid);
        }
        printf("Case %d: %d\n",++cas,mid);
    }
    return 0;
}
