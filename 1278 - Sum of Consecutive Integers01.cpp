#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 10000107
using namespace std;
int prime[1000000],nprime;
bool mark[10000100];
void sieve(int n);
int main()
{
    int cas=0,k,cnt,i,x,ans;
    ll int n,temp;
    double y;
    scanf("%d",&k);
    sieve(SIZE);
   // printf("Prime: %d,ara %d\n",nprime,prime[nprime-1]);
    prime[nprime++]=10000019;
    while(k--)
    {
        scanf("%lld",&n);
        temp=n;
        ans=1,cnt=0;
        x=sqrt(n*1.0);
        for(i=0;prime[i]<=x;i++){
                cnt=0;
            while(n%prime[i]==0){
                n=n/prime[i];
                if(i!=0) cnt++;


            }
            ans*=cnt+1;
            if(n==1) break;
        }
        if(n>1 && temp>2) ans*=2;
        printf("Case %d: %d\n",++cas,ans-1);
    }
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0);
    mark[2]=true;
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
