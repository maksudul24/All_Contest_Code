#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int bisection(int n);
int main()
{
    int cas=0,k,n;
   // freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",++cas,bisection(n));
    }
    return 0;
}
int bisection(int n)
{
    int high=1000,low=0,mid;
    while(high-low>2){
        mid=(high+low)/2;
        printf("%d\n",mid);
        if(mid>n) high=mid;
        else low=mid;
    }
    return mid;
}

