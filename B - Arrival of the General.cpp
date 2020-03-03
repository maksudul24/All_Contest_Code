#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 50
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    int i,ts,ans,n,max_v=0,min_v=1000,pos_min,pos_max;
    FI;
    scanf("%d",&ts);
    for(i=0;i<ts;i++){
        scanf("%d",&n);
        if(n>max_v){
            max_v=n;
            pos_max=i;
        }
        if(n<=min_v){
            min_v=n;
            pos_min=i;
        }
    }
    ans=pos_max+(ts-pos_min+1);
  //  printf("MAX:%d Min:%d\n",pos_max+1,pos_min+1);
    if(pos_max>pos_min) ans--;
    printf("%d\n",ans-2);
    return 0;
}

