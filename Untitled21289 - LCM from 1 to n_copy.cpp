
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define Mod 4294967296
#define SIZE 100000032
using namespace std;
int prime[5761556],nprime=0;
int status[SIZE/32];
bool Check(int n,int pos){ return (bool)(n & (1<<pos));}
int Set(int n,int pos){	return n=n | (1<<pos);}

int power(int a,int b)
{
    if(b==0) return 1;
    int x=power(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}
void sieve(int n)
{
     int i, j, sqrtN;
     prime[nprime++]=2;
     sqrtN = int( sqrt( n ) );
     for( i = 3; i <= n; i += 2 )
     {
		 if( Check(status[i/32],i%32)==0)
		 {
		     prime[nprime++]=i;
		     if(i<=sqrtN){
                 for( j = i*i; j <= n; j += 2*i )
                 {
                     status[j/32]=Set(status[j/32],j % 32)   ;
                 }
		     }
		 }
	 }
	 return;

}


long long int LCM(int n)
{
    int limit=sqrt(n*1.0)+2,i,y,temp;
    double x,num;
    num=log10(n*1.0);
    long long int ans=1;
    for(i=0;prime[i]<=n;i++){
        if(prime[i]<=limit){
            x=num/log10(prime[i]);
            y=x;
         //   printf("%d %d\n",prime[i],y);
            temp=power(prime[i],y);
            ans=(temp*ans)%Mod;
        //    printf("prime:%d pow:%d\n",prime[i],temp);
        }
        else ans=(ans*prime[i])%Mod;
    }
    return ans;
}

int main()
{
    int n,cas=0,ts;
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    sieve(SIZE-12);
    while(ts--){
        scanf("%d",&n);
        printf("Case %d: %lld\n",++cas,LCM(n));
    }
    return 0;
}
