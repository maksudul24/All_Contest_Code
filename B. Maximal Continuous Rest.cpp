#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,n,max_v=0,cnt=0,x,temp,temp2;
    bool sw=true;
   // freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(i==0){
            temp=x;
        }
        if(x==1){
            cnt++;
            if(cnt>max_v) max_v=cnt;
        }
        else{
            if(sw){
                temp2=cnt;
            }
            sw=false;
            cnt=0;
        }
        if(i==n-1 && x==1 && temp==1 && n!=1){
            temp2+=cnt;
            if(temp2>max_v) max_v=temp2;
        }
    }
    printf("%d\n",max_v);
    return 0;
}

