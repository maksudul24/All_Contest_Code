#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 105
#define SIZE2 10010
using namespace std;

int city[SIZE2],ans;
 vector<int> node[SIZE2];
 queue<int>q;

void bfs_total(int limit,int source)
{
    int u,v,level[SIZE2],length;
    q.push(source);
    memset(level,-1,sizeof(level));
    level[source]=1;
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        city[u]++;
        if(city[u]==limit) ans++;
        for(v=0;v<length;v++){
                if(level[node[u][v]]==-1){
                    level[node[u][v]]=level[u]+1;
                    q.push(node[u][v]);
                }
        }
    }
}

int main()
{
    int i,n,cas=0,ts,x,k,y,m,ara[SIZE2];
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
            ans=0;
            memset(city,0,sizeof(city));
        scanf("%d %d %d",&k,&n,&m);
        n+=10;
         for(i=0;i<n;i++){
                node[i].clear();
         }
        for(i=0;i<k;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<m;i++){
            scanf("%d %d",&x,&y);
            node[x].push_back(y);
        }
        for(i=0;i<k;i++) bfs_total(k,ara[i]);
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}
