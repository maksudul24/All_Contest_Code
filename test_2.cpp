#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k;
    ll int n;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%lld",&n);
        n=sqrt(n*1.0);
        printf("Case %d: %lld %d\n",++cas,n,SIZE+20);
    }
    return 0;
}
