#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 100010
using namespace std;

int main()
{
    int n,cas=0,ts,s,x,a,b;
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d %d",&n,&x,&s);
        for(int i=0;i<s;i++){
            scanf("%d %d",&a,&b);
            if(a==x) x=b;
            else if(b==x) x=a;
        }
        printf("%d\n",x);
    }
    return 0;
}

