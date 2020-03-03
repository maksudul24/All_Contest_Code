#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define Mod 4294967296
using namespace std;
int prime[5761556],nprime=0;
bool mark[100000100];
void sieve(int);

int power(int a,int b)
{
    if(b==0) return 1;
    int x=power(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}

unsigned long long int LCM(int n)
{
    int limit=sqrt(n*1.0)+2,i,y,temp;
    double x,num;
    num=log10(n*1.0);
    unsigned long long int ans=1;
    for(i=0;prime[i]<=n;i++){
        if(prime[i]<=limit){
            x=num/log10(prime[i]);
            y=x;
            temp=power(prime[i],y);
            ans=(temp*ans)%Mod;
        }
        else ans=(ans*prime[i])%Mod;
    }
    return ans;
}

int main()
{
    int n,cas=0,ts;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    sieve(100000010);
    while(ts--){
        scanf("%d",&n);
        printf("Case %d: %llu\n",++cas,LCM(n));
    }
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!=true){
            prime[nprime++]=i;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]=true;
                }
            }
        }
    }
    return;
}

