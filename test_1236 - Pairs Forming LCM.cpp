#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int u_cnt=0;
ll int lcm(ll int a,ll int b);
long long int pairsFormLCM(ll int n );
int main()
{
    int i,j,n,cas=0,ts;
 //   freopen("in.txt","r",stdin);
    ll int ans;
    scanf("%d",&ts);
    while(ts--){

        u_cnt=0;
        scanf("%lld",&ans);
        printf("Case %d: cnt:%d ans: %lld\n",++cas,u_cnt,pairsFormLCM(ans));
    }
    return 0;
}

long long int pairsFormLCM(ll int n ) {
    long long int res = 0;
    for( int i = 1; i <= n; i++ )
        for( int j = i; j <= n; j++ )
           if( lcm(i, j) == n ){
                printf("%d %d",i,j);
                if(i!=n && j!=n){
                        u_cnt++;
                        printf("*");
                }
                printf("\n");
                res++; // lcm means least common multiple
           }
    return res;
}
ll int lcm(ll int a,ll int b)
{
   ll int x, gcd,temp_a=a,temp_b=b;
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
     return (temp_a*temp_b)/gcd;
}
