#include<stdio.h>
#include<math.h>
int prime[10000000],nprime,power[1000000];
void sieve(int n);
int main()
{
    int n,i,z,sw=0;
    scanf("%d",&n);
    z=sqrt(n)+2;
    sieve(n);
    for(i=0;i<z;i++){
        if(power[prime[i]]>1){
            if(sw) printf(" x ");
            sw=1;
            printf("%d^%d",prime[i],power[prime[i]]);
        }
        else if(power[prime[i]]==1){
                if(sw) printf(" x ");
                sw=1;
                printf("%d",prime[i]);
        }
    }
    if(!sw) printf("%d is a prime number\n",n);
    else printf("\n");
    return 0;
}
void sieve(int n)
{
    char mark[1000000];
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
