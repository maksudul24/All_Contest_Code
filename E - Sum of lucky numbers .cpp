#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int prime[2000000],nprime;
char mark[2000010];
void sieve(int n);
void gol(int n);
int binary(int n);
int main()
{
    int i,j,n,cas=0,ts;
   // freopen("in.txt","r",stdin);
    sieve(2000005);
    while(scanf("%d",&n)!=EOF){
            gol(n);
    }
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2,k,l;
    mark[1]='1';
    prime[nprime++]=1;
    for(i=4;i<=n;i+=2) mark[i]='1';
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(i<=limit){
                k=1;
                l=i*i;
                j=l;
                for(;j<=n;j=l+k*i,k++){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}
void gol(int n)
{
    int i,j,x,limit=binary(n),cnt=1;
    j=limit/2;
    if(limit%2==1) j++;
    i=j;
    while(1){
        if(prime[i]+prime[j]==n){
                printf("%d is the sum of %d and %d.\n",n,prime[i],prime[j]);
                cnt=0;
               break;
        }
        else if(prime[i]+prime[j]>n) j--;
        else i++;
      //  printf("%d==%d\n",j,i);
        if(i<0 || j<0 || i>limit || j>limit) break;
    }
    if(cnt) printf("%d is not the sum of two luckies!\n",n);
    return;

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

