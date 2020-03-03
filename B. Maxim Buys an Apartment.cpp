#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 500000
using namespace std;
int main()
{
    int n,k,total,ans,temp,ans2;
    cin>>n>>k;
    total=n/3;
    if(n%3!=0) total++;
    if(k<total){
        ans=k*2;
    }
    else{
        ans=n-k;
    }
    if(k!=0 && k!=n){
        ans2=1;
    }
    else ans2=0;
    cout<<ans2<<" "<<ans<<endl;
    return 0;
}

