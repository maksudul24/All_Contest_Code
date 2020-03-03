#include<stdio.h>
#include<math.h>
#include<string.h>
int prime[1000000],nprime,power[1000000];
void sieve(int n);
int main()
{
    int n,i,z,sw=0,k,cas=0,limit=sqrt(n*1.0)+0.5;
    scanf("%d",&k);
    while(k--){
            sw=0;
            scanf("%d",&n);
            printf("Case %d: %d = ",++cas,n);
            for(i=2;i<=n;i++) sieve(i);
            for(i=2;i<=limit;i++){
                if(power[i]>0){
                        if(sw) printf(" * ");
                        sw=1;
                        printf("%d (%d)",i,power[i]);
                }
            }
            memset(power,0,sizeof(power));
            printf("\n");
    }
    return 0;
}
void sieve(int n)
{
    char mark[1000000];
    nprime=0;
    int i,j,limit=sqrt(n*1.0)+2;
    mark[1]='1';
    prime[nprime++]=2;
    for(i=2;n%i==0;i=i*2) power[2]++;
    for(i=4;i<=n;i+=2) mark[i]='1';
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            for(j=i;n%j==0;j=i*j) power[i]++;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}
