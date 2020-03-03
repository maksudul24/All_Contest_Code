#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int prime[1000000],nprime;
char mark[1010000];
ll int func(ll int);
void sieve(int);
int main()
{
    int i,j,cas=0,ts;
    ll int n;
  //  freopen("in.txt","r",stdin);
    sieve(1000100);
    scanf("%d",&ts);
    while(ts--){
        scanf("%lld",&n);
        printf("Case %d: %lld\n",++cas,func(n));
    }
    return 0;
}
ll int func(ll int n)
{
    ll int limit=sqrt(n*1.0),i,ans=0,cnt,x,temp;
    for(i=0;prime[i]<=limit;i++)
    {
        cnt=0,x=prime[i],temp=n;
        while(temp/x){
            cnt+=temp/x;
            x*=prime[i];
        }
        cnt--;
        if(cnt) ans+=prime[i]*cnt;
    }
    return ans;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}
