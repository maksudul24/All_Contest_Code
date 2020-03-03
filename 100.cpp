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
    int i,j,n,max_v,cnt,x,y;
    freopen("in.txt","r",stdin),FO;
    while(scanf("%d %d",&i,&j)!=EOF){
        max_v=0;
        x=i,y=j;
        if(i>j){
            cnt=i;
            i=j;
            j=cnt;
        }
        for(;i<=j;i++){
            n=i;
            cnt=1;
            while(n!=1){
                if(n%2==1) n=(3*n+1);
                else n=n/2;
                cnt++;
            }
            if(cnt>max_v) max_v=cnt;
        }
        printf("%d %d %d\n",x,y,max_v);
    }
    return 0;
}

