#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

char ans1[10],ans2[10];

int main()
{
    ll int i,j,n,cas=0,ts,k,temp;
  //  freopen("in.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld %lld",&n,&k);
        printf("Case %lld: %s %s\n",++cas,ans1,ans2);
    }
    return 0;
}
int big(ll int a, ll int b)
{
    if(b==0) return 1;
    int x=big(a,b/2);
    x=(x*x)%1000;
    if(b%2==1) x=(x*a)%1000;
    return x;


}
int big2(ll int n,ll int k)
{
    if(k==0) return 1;
    int x=big2(n,k/2);
    int a,b,c,temp=x;
    while(temp){
        a=temp%10;
        b=temp%100;
        c=temp%1000;
    }
    if(k%2==1) x=(x*a);
    return x;
}

