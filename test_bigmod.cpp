#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int bigmod(int a,int b);
int main()
{
    int cas=0,k,x,n;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d %d",&x,&n);
        printf("Case %d: %d\n",++cas,bigmod(x,n));
    }
    return 0;
}
int bigmod(int a,int b)
{
    int x;
    if(b==0) return 1;
    x=bigmod(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}
