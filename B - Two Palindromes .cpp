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
    int m,n,i,mid_m,mid_n;
    char x[101],y[101],ch;
    scanf("%s %s",&x,&y);
    m=strlen(x);
    n=strlen(y);
    if(m%2==0 || n%2==0) printf("YES\n");
    else{
            mid_m=m/2;
            mid_n=n/2;
            if(x[mid_m]==y[mid_n]) printf("YES\n");
            else printf("NO\n");

    }
    return 0;
}

