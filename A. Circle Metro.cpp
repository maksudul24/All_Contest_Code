#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1000010
using namespace std;


int main()
{
    int i,j,n,a,x,b,y,cnt=0;
    bool sw=false;
   // freopen("in.txt","r",stdin),FO;
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
    for(i=a,j=b;cnt<=n;i++,j--){
        cnt++;
        if(i>n) i=1;
        if(j<1) j=n;
        if(i==j){
            sw=true;
            break;
        }
        if(i==x || j==y){
            break;
        }

    }
    if(sw) printf("YES\n");
    else printf("NO\n");
    return 0;
}

