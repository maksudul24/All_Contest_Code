#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int prime[5000020],nprime,data[10010020];
bool mark[10000100];
void sieve(int n);
void gol();
int main()
{
    int cas=0,k,n,x;
    sieve(1000100);
    gol();
  // printf("value: %d size: %d\n",prime[nprime-1],nprime);
    printf("Enter Input:\n");
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        x=data[n];
        printf("Case %d: %d\n",++cas,x);
    }
    return 0;
}
void gol()
{
    int i,j,x;
    for(i=0;i<nprime;i++){
        for(j=i;j<nprime;j++){
            x=prime[i]+prime[j];
            data[x]++;
        }
    }
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
