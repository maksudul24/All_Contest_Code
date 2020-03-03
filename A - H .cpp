#include<stdio.h>
#include<math.h>
int prime[100000],nprime,power[100000];
int sieve(int n);
int bigmod(int a,int b);
int main()
{
    int n,i,z,sw=0,x,temp=1,cnt=0,k,w_ans=-1;
    scanf("%d %d",&n,&k);
    x=sieve(n);
   // printf("x:%d\n",x);
    if(x>=k && nprime>0){
        for(i=0;i<nprime;i++){

            if(cnt<k-1){
                    while(power[prime[i]]--){
                        cnt++;
                        printf("%d ",prime[i]);
                        if(cnt==k-1) break;
                    }
            }
            if(cnt==k-1 & power[prime[i]]>0){
                   // printf("\n%d^%d\n",prime[i],power[prime[i]]);
                    temp*=(bigmod(prime[i],power[prime[i]]));
                  //  printf("%d\n",bigmod(prime[i],power[prime[i]]));
            }
        }
        if(cnt==k-1) printf("%d\n",temp);
        else printf("\n");
    }
    else printf("%d\n",w_ans);
    return 0;
}
int sieve(int n)
{
    char mark[100020];
    int i,j,limit=sqrt(n*1.0),cnt=0;
    double chk=sqrt(n);
    prime[nprime++]=2;
    for(i=2;n%i==0;i=i*2){
            cnt++;
            power[2]++;
    }
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            for(j=i;n%j==0;j=i*j){
                    cnt++;
                    power[i]++;
            }
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return cnt;
}
int bigmod(int a,int b)
{
    int x;
    if(b==0) return 1;
    x=bigmod(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}
