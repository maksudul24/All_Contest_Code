#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 100
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

struct id_d{
    int st;
    int en;
};

int main()
{
    int i,j,cas=0,ts,ans,k,n,m,temp,h,s,x,tp;
    int ara[100][100],id[SIZE];
    bool mark[SIZE],sw;
    struct id_d ara_size[100];
    FI;
    scanf("%d",&ts);
    while(ts--){
            temp=0;
        ans=true;
        memset(mark,true,sizeof(mark));
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d %d %d",&id[i],&s,&tp,&m);
            ara_size[id[i]].st=s;
            m=s+m;
            temp=tp;
            ara[id[i]][s]=temp;
            ara_size[id[i]].en=m;
            for(j=s+1;j<=m;j++){
                scanf("%d",&x);
                temp+=x;
                ara[id[i]][j]=temp;
            }
        }
        for(i=0;i<n;i++){
            scanf("%d",&x);
            mark[x]=false;
            if(i!=n-1) sw=false;
            if(ans && i!=n-1){
                for(k=ara_size[x].en;k>=ara_size[x].st;k--){
                    for(h=0;h<n;h++){
                        if(mark[id[h]]){
                                if(k>ara_size[id[h]].st){
                                        sw=true;
                                        break;
                                }
                                if(ara_size[id[h]].en<=k && ara_size[id[h]].st>=k){
                                    if(ara[x][k]<=ara[id[h]][k]){
                                            sw=true;
                                            break;
                                    }
                                }
                        }
                    }
                    if(sw) break;
                }
                if(sw) ans=true;
                else ans=false;
            }
        }
        if(ans) printf("Case %d: We respect our judges :)\n",++cas);
        else printf("Case %d: Say no to rumour >:\n",++cas);
    }

    return 0;
}

