#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int prime[1000000],nprime,ara[1000000],power[10000];
char mark[1007000];
void sieve(int n);
ll int carpet(ll int,ll int);
int main()
{
   ll int i,j,n,cas=0,ts,a,b;
    //freopen("test.txt","r",stdin);
    sieve(1000500);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld %lld",&a,&b);
        printf("Case %lld: %lld\n",++cas,carpet(a,b));
    }
    return 0;
}
ll int carpet(ll int a,ll int b)
{
    ll int n,limit=sqrt(a*1.0),i,cnt=0,num=1,x,temp;
    for(i=0;prime[i]<=limit;i++){
            x=prime[i];
            cnt=0;
            while(a%prime[i]==0){
                a=a/prime[i];
                if(a>=b && pr>=b && temp!=x){
                    printf("%lld %lld\n",x,temp);
                    cnt++;
                }
                x*=prime[i];
           }
           num*=(cnt+1);
    }
    return (num-2)/2;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    mark[1]='1';
    prime[nprime++]=2;
    for(i=4;i<=n;i+=2) mark[i]='1';
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
