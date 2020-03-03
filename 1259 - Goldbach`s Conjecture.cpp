#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int prime[1000020],nprime;
bool mark[10000100];
void sieve(int n);
int gol(int n);
int binary(int n);
int main()
{
    int cas=0,k,n,x;
    sieve(10000100);
  // printf("value: %d size: %d\n",prime[nprime-1],nprime);
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
     //   n=gol(int n);
        printf("Case %d: %d\n",++cas,gol(n));
    }
    return 0;
}
int gol(int n)
{
    int i,j,x,limit=binary(n),cnt=0;
    i=0,j=limit;
    while(1){
        if(prime[i]+prime[j]==n){
                j--;
                cnt++;
        }
        else if(prime[i]+prime[j]>n) j--;
        else i++;
      //  printf("%d==%d\n",j,i);
        if(i==j){
            if(prime[i]+prime[j]==n) cnt++;
            break;
        }
        else if(i<0 || j<0) break;
    }
    return cnt;

}
int binary(int n)
{
    int high=nprime,low=0,mid,i;
    while(high-low>5)
    {
        mid=(high+low)/2;
        if(prime[mid]>n) high=mid;
        else low=mid;
    }
    if(prime[mid]>n) mid-=5;
    for(i=mid;prime[i]<n;i++);
    return i-1;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!=true){
            prime[nprime++]=i;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]=true;
                }
            }
        }
    }
    return;
}
