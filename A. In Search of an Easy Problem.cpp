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
    int i,n,x;
    bool sw=true;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==1) sw=false;
    }
    if(sw) printf("EASY\n");
    else printf("HARD\n");
    return 0;
}

