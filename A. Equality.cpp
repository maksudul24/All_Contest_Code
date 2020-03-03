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
    int i,j,n,cnt,mark[300],ans=0,k,length;
    char ara[100010];
  //  freopen("in.txt","r",stdin);
    scanf("%d %d",&n,&k);
    length=65+k;
    cnt=k;
    scanf("%s",ara);
    memset(mark,0,sizeof(mark));
    for(i=65;i<length;i++) mark[i]=1;
    for(i=0;i<n;i++){
        if(mark[ara[i]]==1){
            mark[ara[i]]=0;
            cnt--;
            if(cnt==0){
                 for(j=65;j<length;j++) mark[j]=1;
                 cnt=k;
                 ans++;

            }
        }
    }
    printf("%d\n",ans*k);
    return 0;
}

