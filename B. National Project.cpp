#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 210
#define uu first
#define vv second
#define pii pair<int,int>
#define dbug(a, args...) printf("Line:%d " a,__LINE__, ##args)

int main()
{
    ll int i,j,cas=0,ts,ans,n,m,temp,b,g;
  //  FI,FO;
    scanf("%lld",&ts);
    while(ts--){

        scanf("%lld %lld %lld",&n,&g,&b);
        temp=(n/2)+(n%2);
        if(g>=temp){
            ans=n;
        }
        else{
            ans=(temp-g)/g;
            if((temp-g)%g!=0){
                ans++;
            }
            ans=ans*(b+g);
            ans+=g;
            if(ans<n){
                ans+=(n/2);
            }
        }
        printf("%lld\n",ans);

    }
    return 0;
}

