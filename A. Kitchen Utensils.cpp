#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 200
using namespace std;

int main()
{
    int i,n,k,mark[SIZE],max_v=0,ara[SIZE],total=0,ans;
   // freopen("in.txt","r",stdin);
   memset(mark,0,sizeof mark);
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        mark[ara[i]]++;
        if(mark[ara[i]]>max_v) max_v=mark[ara[i]];
    }
    ans=max_v/k;
    if(max_v%k!=0) ans++;
    ans=k*ans;
    for(i=0;i<n;i++){
        if(mark[ara[i]]!=0) total+=(ans-mark[ara[i]]);
        mark[ara[i]]=0;
    }
    printf("%d\n",total);
    return 0;
}
