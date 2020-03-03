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
    int i,j,cas=0,ts,ans,n,m,temp,x,a,b,load;
    FI;
    scanf("%d",&ts);
    while(ts--){

        scanf("%d %d %d %d",&n,&x,&a,&b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        ans=b-a;
        load=a-1+(n-b);
        if(load>=x){
            ans+=x;
        }
        else{
            ans+=load;
        }

        printf("%d\n",ans);

    }
    return 0;
}

