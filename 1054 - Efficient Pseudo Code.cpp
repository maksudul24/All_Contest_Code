#include<bits/stdc++.h>
#define ll long long
#define ars 1000020
#define modulo 1000000007
using namespace std;
int mark[ars],prime[ars],nprime;
void sieve(int n);
ll int sod(ll int n,ll int m);
ll int mod(ll int a,ll int b,ll int M);
ll int p_multi(ll int n,ll int m);
int main()
{
    int k,i,cas=0;
    ll int num,n,m,temp;
    scanf("%d",&k);
    sieve(1000000);
    while(k--){
        scanf("%lld %lld",&n,&m);
        num=sod(n,m);
        printf("Case %d: %lld\n",++cas,num);
    }
}
ll int mod(ll int a,ll int b,ll int M)
{
    ll int x;
    if(b==0) return 1 % M;
    x=mod(a,b/2,M);
    x=(x*x) % M;
    if(b%2==1) x=(x*a) % M;
    return x;
}
ll int sod(ll int n,ll int m)
{
    int i,limit=sqrt(n*1.0);
    ll int x,num,total=1,temp=n;
    for(i=0;prime[i]<=limit;i++){
            x=0;
            while(temp%prime[i]==0){
                temp=temp/prime[i];
                x++;
            }
            if(x){
                x=(x*m);
                num=p_multi(prime[i],x);
                total=(total*num) % modulo;
            }
            if(temp==1) break;
    }
    if(temp>1){
                x=1;
                x=(x*m);
                num=p_multi(temp,x);
                total=(total*num) % modulo;
    }
    return total;
}
ll int p_multi(ll int n,ll int m)
{
    ll int ans,x,i;
    ans=mod(n,m+1,modulo);
    ans--;
    x=mod(n-1,modulo-2,modulo);
    if(ans!=-1) ans=(ans*x) % modulo;
    if(ans==-1) ans=1;
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

