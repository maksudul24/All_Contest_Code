
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
#define dbug(a, args...) printf("Line:%d " a,__LINE__, ##args)

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,cnt;
    char ara[SIZE];
    bool sw;
    scanf("%d",&ts);
    while(ts--){
        cnt=0;
        ans=0;
        sw=false;
        scanf("%s",ara);
        n=strlen(ara);
        for(i=0;i<n;i++){
            if(ara[i]=='1'){
                    ans+=cnt;
                    cnt=0;
                    sw=true;
            }
            else if(sw) cnt++;
        }
        printf("%d\n",ans);

    }
    return 0;
}
