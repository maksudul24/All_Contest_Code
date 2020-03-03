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
    int i,n,m,x,y,temp_x,temp_y;
    bool sw=true;
   // freopen("in.txt","r",stdin),FO;
    scanf("%d %d",&n,&m);
    scanf("%d %d",&temp_x,&temp_y);
    for(i=1;i<m;i++){
        scanf("%d %d",&x,&y);
        if(sw){
            if(temp_x==x || temp_x==y || temp_y==x || temp_y==y){
                temp_x=x;
                temp_y=y;
            }
            else{ sw=false; }
        }
    }
    if(sw){ printf("YES\n"); }
    else{ printf("NO\n"); }
    return 0;
}

