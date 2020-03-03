
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>



#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define dbug(a, args...) printf("Line:%d " a,__LINE__, ##args)

using namespace std;

int prime[1000000],nprime,multi[1000],index,div_index;
ll int divisor[10000],p_number[10000];
bool mark[10000000];
void sieve(int);
void p_f_LCM(ll int n);
void findFactors(ll int primeDivisors[], int multiplicity[], int currentDivisor,long long int currentResult);
ll int final_result(ll int ara[],ll int n);
int main()
{
    int i,j,cas=0,ts;
    ll int n;
   // FI,FO;
    sieve(10000010);
    scanf("%d",&ts);
    while(ts--){
        index=0;
        div_index=0;
        scanf("%lld",&n);
        p_f_LCM(n);
        findFactors(p_number,multi,0,1);
        printf("Case %d: n(%lld) = %lld\n",++cas,n,final_result(divisor,n)+div_index);
    }
    return 0;
}
void p_f_LCM(ll int n)
{
    int i,limit=sqrt(n*1.0)+1,cnt;
    for(i=0;prime[i]<=limit;i++){
        if(n%prime[i]==0){
            p_number[index]=prime[i];
                multi[index]=0;
            while(n%prime[i]==0){
                multi[index]++;
                n=n/prime[i];
            }
            index++;
        }
        if(n==1) break;
    }
    if(n!=1){
            p_number[index]=n;
            multi[index]=1;
            index++;
    }
    return;
}

void findFactors(ll int primeDivisors[], int multiplicity[], int currentDivisor,long long int currentResult) {
    if (currentDivisor == index) {
        divisor[div_index++]=currentResult;
        return;
    }
    for (int i = 0; i <= multiplicity[currentDivisor]; i++) {
        findFactors(primeDivisors, multiplicity, currentDivisor + 1, currentResult);
        currentResult *= primeDivisors[currentDivisor];
    }
}



ll int gcd(ll int a,ll int b)
 {
     ll int x, gcd;
     if (a < b) {
         x = a;
     }
     else {
         x = b;
     }
     for(; x >= 1; x--) {
         if (a % x == 0 && b % x == 0) {
             gcd = x;
             break;
         }
     }
     return gcd;
 }
 ll int final_result(ll int ara[],ll int n)
 {
    ll int cnt=0,x,y;
    int i,j;
    for(i=1;i<div_index;i++){
            for(j=i+1;j<div_index-1;j++){
                    x=gcd(ara[i],ara[j]);
                    y=ara[i]*ara[j];
                    if(x*n==y) cnt++;
            }
    }
    return cnt;
 }
void sieve(int n)
{
    ll int i,j,limit=sqrt(n*1.0)+2;
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
