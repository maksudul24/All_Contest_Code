#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,j,n,ans=0,max_v=0,res,x;
   // freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>max_v) max_v=x;
        ans+=x;
    }
    i=max_v;
    while(1){
        res=i*n;
        res=res-ans;
        if(res>ans) break;
        i++;
    }
    printf("%d\n",i);
    return 0;
}

