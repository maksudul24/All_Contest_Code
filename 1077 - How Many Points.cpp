#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
ll int gcm(ll int a,ll int b);
int main()
{
    ll int cas=0,k,x1,x2,y1,y2;
   // freopen("in.txt","r",stdin);
    scanf("%lld",&k);
    while(k--)
    {
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        x1=abs(x1-x2);
        y1=abs(y1-y2);
        x1=gcm(x1,y1);
        printf("Case %lld: %lld\n",++cas,x1+1);
    }
    return 0;
}
ll int gcm(ll int a,ll int b)
{
     ll int t, x, gcd;
     if (a == 0) gcd = b;
     else if (b == 0) gcd = a;
     else {
         while (b != 0) {
             t = b;
             b = a % b;
             a = t;
         }
         gcd = a;
     }
    return gcd;
 }
