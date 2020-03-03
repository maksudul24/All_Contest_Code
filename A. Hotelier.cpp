#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 500000
#define SIZE2 15
using namespace std;
int main()
{
    int i,j,n,x;
    char ara[SIZE],ans[SIZE2];
   // FI,FO;
    for(i=0;i<10;i++) ans[i]='0';
    scanf("%d",&n);
    scanf(" %s",ara);
    for(i=0;i<n;i++){
        if(ara[i]=='L'){
            for(j=0;j<10;j++){
                if(ans[j]=='0'){
                    ans[j]='1';
                    break;
                }
            }
        }
        else if(ara[i]=='R'){
            for(j=9;j>=0;j--){
                if(ans[j]=='0'){
                    ans[j]='1';
                    break;
                }
            }
        }
        else{
            x=ara[i]-'0';
            ans[x]='0';
        }
    }
    printf("%s\n",ans);
    return 0;
}
