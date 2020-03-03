#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000120
#define Mod 1000003
using namespace std;
ll int com[1000020];
void combin();
ll int bigmd(ll int a,ll int b,ll int m);
int main()
{
   ll  int cas=0,k,n,r,a,b,x;
   // freopen("in.txt","r",stdin);
   combin();
    scanf("%lld",&k);
    while(k--)
    {
        scanf("%lld %lld",&n,&r);
        if(n-r>0 && r>0){
            a=bigmd(com[r],Mod-2,Mod);
            b=bigmd(com[n-r],Mod-2,Mod);
            x=(com[n]*a*b)%Mod;
        }
        else x=1;
        printf("Case %lld: %lld\n",++cas,x);
    }
    return 0;
}
void combin()
{
    ll int i,temp=1;
    for(i=1;i<1000012;i++){
            temp=(temp*i)%Mod;
            com[i]=temp;
    }
    return;

}
ll int bigmd(ll int a,ll int b,ll int m)
{
    if(b==0) return 1%m;
    ll int x=bigmd(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}

