#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 210
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,row,col,cnt,tmp,cnt2;
    row=3,col=4;
    cnt=0,tmp=0;
    cnt2=0;
    for(i=tmp;cnt<col*row;cnt++){
        printf("%d ",i);
        i+=row;
        cnt2++;
        if(cnt2==col){
            tmp++;
            i=tmp;
            cnt2=0;
        }

    }
    return 0;
}
