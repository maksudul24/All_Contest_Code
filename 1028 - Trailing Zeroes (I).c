#include<stdio.h>
#include<math.h>
int prime[1000020],nprime;
char mark[1000200];
void sieve();
int divisor(long long int n);
int main()
{
    int n,cas=0,div;
    long long int x,number;
    double y;
    sieve();
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&x);
        if(x==1) div=0;
        else div=divisor(x);

        printf("Case %d: %d\n",++cas,div);
    }
    return 0;
}
void sieve()
{
    int i,j,limit=sqrt(1000020*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=1000020;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(limit<=1000020){
                for(j=i*i;j<=1000020;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
}
int divisor(long long int n)
{
    int i,j,temp,cnt,div=1,limit=sqrt(n);
    long long int number=1,x;

    x=n;
        for(i=0;prime[i]<=limit;i++){
            if(x%prime[i]==0){
                cnt=0;
                while(x%prime[i]==0){
                    cnt++;
                    x=x/prime[i];
                }
                div=div*(cnt+1);
            }
        }
        if(div!=1) div--;
        return div;
}


