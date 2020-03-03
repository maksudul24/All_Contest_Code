#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1100
using namespace std;

ll int bigmod(ll int a,ll int b,ll int m)
{
    if(b==0) return 1%m;
    ll int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}

ll int modIn(ll int a,ll int m)
{
    a = a%m;
    for (int x=1; x<m; x++){
       if ((a*x) % m == 1){
          return x;
       }
    }
    return 1;
}

int main()
{
    ll int i,j,n,cas=0,ts,cases,tims,K,MOD,caseno=0,res,x,temp;
    freopen("in.txt","r",stdin);
    scanf("%lld", &cases);

    while( cases-- ) {
        scanf("%lld %lld %lld", &n, &K, &MOD);
        res=0;

        for( i = 0; i < n; i++ ){
                scanf("%lld", &x);
                res=(x+res)%MOD;
        }
        tims=bigmod(n,K,MOD);
        printf("Tmse:%lld res:%lld ",tims,res);
        tims=(tims*K)%MOD;
        temp=modIn(n,MOD);
        tims=(temp*tims)%MOD;
        res=(tims*res)%MOD;
        printf("NewTims:%lld , res:%lld\n",tims,res);
         printf("Case %lld: %lld\n",++caseno,res);

    }
    return 0;
}

