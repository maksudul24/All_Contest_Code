#include<bits/stdc++.h>
using namespace std;
int prime[1020025],nprime;
char mark[1020025];
void sieve(int n);
int main()
{
    int n,cas=0,l,i,div,cnt;
    long long int x,m;
    sieve(1000020);
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&x);
        m=x;
        div=1;
        l=sqrt(x);
        if(x>1){
            for(i=0;prime[i]<=l;i++){
                if(m==1) break;
                    cnt=0;
                if(m%prime[i]==0){
                    while(m%prime[i]==0){
                            cnt++;
                            m=m/prime[i];

                    }
                    div=div*(cnt+1);
                }
            }
        }
        if(m>1) div=div*2;
        if(div!=1) div--;
        if(x==1) div=0;
        printf("Case %d: %d\n",++cas,div);

    }
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2,cnt;
    mark[1]='1';
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
}


