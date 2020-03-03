#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int cnt;
void per(char ara[]);
int main()
{
    int i,j,n,cas=0,ts,r;
    char ara[50][50];
    for(i=0;i<26;i++){
        for(j=0;j<=i;j++){
            ara[i][j]='A'+j;
        }
    }
    for(i=0;i<=26;i++){
        printf("%s\n",ara[i]);
    }
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&r);
        cnt=1;
        per(ara[n-1]);
        printf("Case %d: %d\n",++cas,r);
    }
    return 0;
}
void per(char ara[])
{
    cnt++;

}
