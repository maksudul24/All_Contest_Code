#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define limit 4294967296
using namespace std;

ll int ans;
vector <ll int> v[50];
void becteria();
ll int big(ll int,ll int);
int found (int);
int found2(int);
int main()
{
    int i,j,cas=0,ts;
    ll int x,n;
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    becteria();
    while(ts--){
        scanf("%lld",&ans);
        if(ans<0){
                ans*=-1;
                printf("Case %d: %d\n",++cas,found2(31));
        }
        else printf("Case %d: %d\n",++cas,found(32));
    }
    return 0;
}
int found(int n)
{
    if(n==1) return 1;
    int low=0,high=v[n].size(),mid,x;
    if(high>0){
        while(high>=low){
            mid=(high+low)/2;
            if(v[n][mid]==ans) return n;
            else if(v[n][mid]>ans) high=mid-1;
            else if(v[n][mid]<ans) low=mid+1;
        }
    }
    x=found(n-1);

}
int found2(int n)
{
    if(n==1) return 1;
    int low=0,high=v[n].size(),mid,x;
    if(high>0){
        while(high>=low){
            mid=(high+low)/2;
            if(v[n][mid]==ans) return n;
            else if(v[n][mid]>ans) high=mid-1;
            else if(v[n][mid]<ans) low=mid+1;
        }
    }
    x=found2(n-2);

}
void becteria()
{
    ll int i,j,x;
    for(i=2;i<=65536;i++){
        if(i<=1625){
            for(j=2;;j++){
                x=big(i,j);
                if(x>limit) break;
                v[j].push_back(x);
            }
        }
        else v[2].push_back(i*i);
    }
}
ll int big(ll int a, ll int b)
{
    if(b==0) return 1;
    ll int x=big(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}

