#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
ll int bigmd(ll int a,ll int b,ll int m);
int main()
{
    ll int cas=0,k,a,b,ans;
    scanf("%lld",&k);
    while(k--)
    {
        scanf("%lld %lld",&a,&b);
        ans=bigmd(a,b,1000003);
        printf("%d\n",ans);
    }
    return 0;
}
ll int bigmd(ll int a,ll int b,ll int m)
{
    if(b==0) return 1%m;
    ll int x=bigmd(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}
