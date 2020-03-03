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
#define dbg(a, args...) printf("Line:%d " a,__LINE__, ##args)

int main()
{
    int i,ans,n,x,temp,mark[SIZE],max_v=-1,k;
    scanf("%d %d",&n,&k);
    memset(mark,0,sizeof(mark));
    for(i=0;i<n;i++){
        scanf("%d",&x);
        mark[x]++;
    }
    for(i=1;i<=k;i++){
        if(mark[i]>max_v){
            max_v=mark[i];
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}

