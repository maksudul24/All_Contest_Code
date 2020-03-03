#include<bits/stdc++.h>
#define ll long long
using namespace std;
int prime[100020],nprime=1,seg;
long long int a,b,help;
char mark[100220],mark2[100220];
void sieve(int n);
ll int banzo(ll int n);
int chq(long long int x)
{
    int limit=sqrt(x*1.0)+2,i;
    if(x==2) return 1;
    else if(x==1) return 0;
    else if(x%2==0) return 0;
    else if(x==3) return 1;
    for(i=3;i<=limit;i+=2) if(x%i==0) return 0;
    return 1;
}
int main()
{
    int n,i,cas=0;
    ll temp,j;
    scanf("%d",&n);
    while(n--){
        nprime=0;
        scanf("%lld %lld",&a,&b);
        temp=sqrt(b*1.0)+5;
        if(b>2 && b-a>3){
            sieve(temp);
            temp=banzo(b);
            if(a==1) temp--;
            if(chq(a)==1) b++;
           printf("temp:%lld b:%lld chq:%d\n",temp,b,chq(a));
            printf("Case %d: %lld\n",++cas,b-a-temp);
        }
        else{
                temp=0;
            for(i=0;;i++){
                if(chq(a)==1) temp++;
                if(a==b) break;
                a++;
            }
            printf("Case %d: %lld\n",++cas,temp);

        }
       //1 is not a prime
       cout<<"Max :"<<help<<endl;
        memset(mark2,'\0',sizeof(mark2));
    }
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    mark[1]='1';
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(i<=limit){
                seg=nprime-1;
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}
ll int banzo(ll int n)
{
    ll int i,j,cnt=(b/2)-(a/2);
    help=0;
    for(i=1;i<nprime;i++){

            j=a/prime[i];
            if(j%2==0) j+=1;
            if(j==1) j+=2;
            j=j*prime[i];
           // printf("Starting with: %d\n",j);
        for(;j<=n;j+=prime[i]*2){
            if(j>=a && j<=b){
                 //   printf("%d\n",j);
                if(mark2[b-j+1]!='1'){
                        cnt++;
                    mark2[b-j+1]='1';
                }
            }
        }
    }
    return cnt;
}
