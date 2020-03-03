#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 12000
using namespace std;

int main()
{
    int i,j,n,cnt=0,ara[SIZE],temp;
    FI;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    temp=ara[1];
    for(i=1;i<=n;i++){
        if(i==temp && ara[i]==i) cnt++;
        else if(ara[i]>temp && ara[i]==i) cnt++;
        if(temp<ara[i]) temp=ara[i];
    }
    printf("%d\n",cnt);
    return 0;
}
