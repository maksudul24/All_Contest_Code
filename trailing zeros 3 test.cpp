#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,i,ans,x,n;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&x);
        ans=0,i=5;
        n=x;
        while(n){
            n=x/i;
            ans+=1.0*x/i;
            i*=5;
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}
