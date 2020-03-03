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
ll int sieve(int n)
{
     int i, j, limit,temp,y;
     double x,num=log10(n);
     ll int ans=1;
     if(n==0) ans=0;
     if(n>=2){
        x=num/log10(2);
        y=x;
        temp=power(2,y);
        ans=(temp*ans)%Mod;
     }
     limit = int( sqrt( n ) );
     for( i = 3; i <= n; i += 2 )
     {
		 if( Check(status[i/32],i%32)==0)
		 {
            if(i<=limit){
                x=num/log10(i);
                y=x;
                temp=power(i,y);
                ans=(temp*ans)%Mod;
                 for( j = i*i; j <= n; j += 2*i )
                 {
                     status[j/32]=Set(status[j/32],j % 32)   ;
                 }
		     }
             else ans=(ans*i)%Mod;
		 }
	 }
	 return ans;

}

int main()
{
    int n,cas=0,ts;
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        printf("Case %d: %lld\n",++cas,sieve(n));
    }
    return 0;
}
