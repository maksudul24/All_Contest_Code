#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1200
#define SIZE2 200200
using namespace std;

int main()
{
    int i,n,j,max_v=0,temp,mark[SIZE2],x,ans;
    int ara[SIZE];
    memset(mark,0,sizeof(mark));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            x=ara[i]+ara[j];
            mark[x]++;
            if(mark[x]>max_v) max_v=mark[x];
        }
    }
    printf("%d\n",max_v);
    return 0;
}
