#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 150
using namespace std;

int main()
{
    int i,j,n,cas=0,ts,cnt=0,m,k,x;
    int ara[SIZE],mx[SIZE],schl[SIZE];
    //freopen("in.txt","r",stdin);
    memset(mx,0,sizeof(mx));
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        schl[ara[i]]=x;
        if(mx[x]<ara[i]){
            mx[x]=ara[i];
        }
    }
    for(i=0;i<k;i++){
        scanf("%d",&x);
      //  printf("%d %d\n",ara[x],mx[schl[ara[x]]]);
        if(ara[x]!=mx[schl[ara[x]]]){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
