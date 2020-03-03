#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
#define mod 1000003
using namespace std;
int bigmod(int a,int b,int m);
int main()
{
    int cas=0,k,x,n;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d %d",&x,&n);
        if(n>1) x=bigmod(x,n,mod);
        else x=bigmod(x,mod-2,mod);
        printf("Case %d: %d\n",++cas,x%mod);
    }
    return 0;
}
int bigmod(int a,int b,int m)
{
    int x;
    if(b==0) return 1;
    x=bigmod(a,b/2,mod);
    x=(x*x)%mod;
    if(b%2==1) x=(x*a)%mod;
    return x;
}
