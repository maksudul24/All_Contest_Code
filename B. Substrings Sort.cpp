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
    int i,j,n,cas=0,ts,len[110];
    char ara[110][110];
  //  freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    for(i=1;i<=ts;i++){
        scanf("%s",ara[i]);
        len[i]=strlen(ara[i]);
    }
    for(i=1;i<=ts;i++){
        for(j=i;j<=ts;j++){
            if(len[i]>len[j]){

            }
        }
    }
    return 0;
}
