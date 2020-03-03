#include<bits/stdc++.h>
#define ll long long
#define ars 1000020
using namespace std;
int mark[ars],prime[ars],nprime;
ll int sod(ll int n);
ll int mod(ll int a,ll int b,ll int M);
int main()
{
    int k,i,cas=0;
    ll int num,n,m,temp;
    scanf("%d",&k);
    while(k--){
        scanf("%lld %lld",&n,&m);
        num=mod(n,m,1000000007);
        cout<<"Mod: "<<num<<endl;
        num=sqrt(num*1.0)+2;
        num=sod(num);
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
ll int sod(ll int n)
{
    int limit=sqrt(n*1.0)+.0005,i,temp=n,cnt=0,j;
    ll int x=1,ans=1,total=1;
    while(temp%2==0){
            temp=temp/2;
            x*=2;
            ans+=x;
    }
    total*=ans;
    for(i=3;i<=n;i+=2){
        if(mark[i]!=1){
            prime[nprime++]=i,x=1,ans=1;
            while(temp%i==0){
                temp=temp/i;
                x*=i;
                ans+=x;
            }
            total=total*ans;
            if(temp==0) break;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2) mark[j]=1;
            }
        }
    }
    return total;
}
