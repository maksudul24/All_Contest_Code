#include<stdio.h>
#include<math.h>
int prime[10000000],nprime;
char mark[10000100];
void sieve(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("List of prime number at %d\n",n);
    sieve(n);
    for(i=0;i<nprime;i++){
        printf("%d ",prime[i]);
    }
    printf("\n");
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    mark[1]='1';
    prime[nprime++]=2;
    for(i=4;i<=n;i+=2) mark[i]='1';
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
