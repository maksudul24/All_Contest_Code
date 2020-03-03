#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,j,n,m,cnt=0,ans;
    scanf("%d %d",&n,&m);
    if(m%n==0){
        ans=m/n;
        while(ans%2==0){
            ans=ans/2;
            cnt++;
            if(ans==1) break;
        }
        while(ans%3==0){
            ans=ans/3;
            cnt++;
            if(ans==1) break;
        }
        if(ans==1) printf("%d\n",cnt);
        else printf("-1\n");

    }
    else printf("-1\n");
    return 0;
}
