#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
#define max_size 100000000
using namespace std;
double bisec(int n,int x);
int bigmod(int a,int b);
int main()
{
    int cas=0,k,n,x;
   // freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        x=0;
        scanf("%d",&n);
        if(n>6){
            x=ceil((log10(n-6))/(1.0*log10(5.0)));
        }
        x=ceil(bisec(n,x));
        printf("Case %d: %d\n",++cas,x);
    }
    return 0;
}

double bisec(int n,int x)
{
    double low,high=max_size,mid;
    int i=5,temp=n,ans;
    while(high-low>0.0001){
        mid=(high+low)/2;
        temp=mid;
        i=5;
        ans=0;
      //  printf("%lf\n",mid);
        while(temp/i){
            ans+=temp/i;
           i*=5;
        }
        if(ans>n) high=mid;
        else low=mid;
    }
    printf("%lf\n",mid);
    return mid;
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
