#include<stdio.h>
#include<math.h>
long long int phi[5000005];
char mark[5000005];
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    for(i=0;i<=n;i++) phi[i]=i;
    phi[0]=0;
    phi[1]=1;
    mark[1]='1';
    for(i=2;i<=n;i++){
        if(mark[i]!='1'){
            for(j=i;j<=n;j+=i){
                mark[j]='1';
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
    int cas=0,n,max=0,i,a,b;
    long long int ans=0;
    scanf("%d",&n);
    sieve(5000005);
    for(i=1;i<=5000005;i++){
        ans+=phi[i]*phi[i];
        phi[i]=ans;
    }
   // for(i=1;i<=20;i++) printf("%d\n",phi[i]);
    while(n--){
        scanf("%d %d",&a,&b);
        printf("Case %d: %lu\n",++cas,(phi[b]-phi[a-1]));
    }
    return 0;
}
