#include<bits/stdc++.h>
#define ll long long
using namespace std;

int prime[1000000],nprime,ara[10000000],divisor[1000];
vector <ll int> p,di;
void sieve(int);
void div(ll int);
void rec();
int main()
{
    ll int n;
    sieve(10000010);
    scanf("%lld",&n);
    div(n);
    if(p.size()>0) rec()
    printf("\n");
    return 0;

}
int rec(int n,int m)
{
    int x,y;
    if(m>=0) x=rec(n,m-1);
    else if(n>=0){
            m=ara[p[n-1]];
            x=rec(n-1,m);
    }
    else return 1;
    if(m>=0) y=rec(n,m-1);
    else if(n>=0){
            m=ara[p[n-1]];
            y=rec(n-1,m);
    }
    return x*y;


}
void div(ll int n)
{
    int limit=sqrt(n*1.0),i
    for(i=0;prime[i]<=limit;i++){
            if(n%prime[i]==0) p.push_back(prime[i]);
        while(n%prime[i]==0){
            ara[prime[i]]++;
            n=n/prime[i];
        }
        if(n==1) break;
    }
    if(n!=1) p.push_back(n);// limit er upore je prime thakbe seta etar vitorei thakbe
    return;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}
ll int big(ll int a,ll int b)
{
    if(b==0) return 1;
    int x=big(a,b/2);
    x=x*x;
    if(x%2==1) x=a*x;
    return x;
}
