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
    int d,w,m;
    scanf("%d %d %d",&d,&w,&m);
    if(w<=d){
        if(w+m<=d) printf("good luck\n");
        else printf("see you next semester\n");
    }
    else printf("good luck\n");
    return 0;
}
