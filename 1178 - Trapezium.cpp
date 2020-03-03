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
    int i,j,n,cas=0,ts;
    double a,b,c,d,x,temp;
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        temp=d*d;
        x=a*a+c*c+temp-b*b-2*a*c;
        x=x/(2*(a-c));
        x=temp-x*x;
        x=sqrt(x*1.0);
        x=(x*(a+c))/2.0;
        printf("Case %d: %0.7lf\n",++cas,x);
    }
    return 0;
}

