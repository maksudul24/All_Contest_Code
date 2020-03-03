#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 100
using namespace std;

int main()
{
    int i,j,n,min_v=100000,temp,x,ans;
    char ara[SIZE];
    char gen[]={'A','C','T','G'};
    scanf("%d",&n);
    scanf("%s",ara);
    for(i=0;i<=n-4;i++){
            ans=0;
        for(j=0;j<4;j++){
            x=gen[j]-ara[i+j];
            if(x<0){
                temp=x+26;
                x=x*-1;
            }
            else{
                temp=26-x;
            }
            if(x<temp){
                ans+=x;
            }
            else ans+=temp;
        }
        if(ans<min_v) min_v=ans;
    }
    printf("%d\n",min_v);
    return 0;
}

