#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 200100
using namespace std;

int main()
{
    int i,n,rext=0,lext=0,cnt=0,mrext=0,mlext=0,ans_l,ans_r,x;
   // FI;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==1){
            rext++;
        }
        else{
            lext++;
        }
        if(rext>mrext){
            mrext=rext;
            ans_r=i+1;
        }
        if(lext>mlext){
            mlext=lext;
            ans_l=i+1;
        }
    }
    if(ans_r<ans_l){
        printf("%d\n",ans_r);
    }
    else printf("%d\n",ans_l);
    return 0;
}

