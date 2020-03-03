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
    int i,j,n,cas=0,ts;
    char ara[120];
    bool sw;
   // freopen("in.txt","r",stdin),FO;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        sw=true;
        getchar();
        scanf("%s",ara);
        for(i=0;i<n;i++){
            if(ara[i]=='8'){
                if(n-i-1>=10){
                    printf("YES\n");
                    sw=false;
                    break;
                }
            }
        }
        if(sw) printf("NO\n");
    }
    return 0;
}

