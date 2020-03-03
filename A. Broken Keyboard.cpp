#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 510
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    int i,j,cas=0,ts,ans,k,n,m,cnt;
    char ara[SIZE],ch,prev;
    int mark[SIZE];
 //   FI;
    scanf("%d",&ts);
    while(ts--){
        scanf(" %s",ara);
        cnt=1;
        memset(mark,-1,sizeof(mark));
        n=strlen(ara);
        prev=ara[0];
        mark[ara[0]]=3;
        if(n>1){
            if(ara[0]!=ara[1]) mark[ara[0]]=1;
        }
        for(i=1;i<n;i++){
            ch=ara[i];
            if(mark[ch]==-1) mark[ch]=3;
            if(i!=n-1){
                if(ara[i-1]!=ara[i] && ara[i]!=ara[i+1]){
                    mark[ara[i]]=1;
                }
            }
            else if(ara[i]!=ara[i-1]){
                mark[ara[i]]=1;
            }
            if(ch==prev){
                cnt++;
            }
            else{
                if(cnt>1){
                    if(cnt%2!=0) mark[prev]=1;
                }
                cnt=1;
                prev=ch;
            }
            if(cnt==2){
                if(mark[ch]!=1){
                    mark[ch]=0;
                }
            }
        }
        if(cnt>1){
            if(cnt%2!=0) mark[ara[n-1]]=1;
        }
        for(i=0;i<26;i++){
            if(mark['a'+i]==1 || mark['a'+i]==3){
                        printf("%c",'a'+i);
            }
        }
         cout<<endl;
    }
    return 0;
}

