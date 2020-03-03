#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 500
using namespace std;

int pos[SIZE];
vector<int> node[SIZE];

void bfs_first(int n,int source)
{
    int u,v,length,i;
    bool sw=true;
    queue<int> q;
    for(i=0;i<n;i++){
        pos[i]=200000;
    }
    q.push(source);
    pos[source]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        for(v=0;v<length;v++){
            if(pos[node[u][v]]==200000){
                pos[node[u][v]]=pos[u]+1;
                q.push(node[u][v]);

            }

        }
    }
}

int bfs(int source,int n,int value,int des)
{
    int u,v,length;
    queue<int> q;
    int level[n];
    memset(level,0,sizeof(level));
    q.push(source);
    level[source]=value;
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        for(v=0;v<length;v++){
            if(level[node[u][v]]==0){
                level[node[u][v]]=level[u]+1;
                if(node[u][v]==des) break;
                q.push(node[u][v]);

            }

        }
    }
    return level[des];
}

int main()
{
    int i,j,n,cas=0,ts,ans,r,a,b;
    FI;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&r);
        for(i=0;i<r;i++){
            scanf("%d %d",&a,&b);
                node[a].push_back(b);
                node[b].push_back(a);
        }
        scanf("%d %d",&a,&b);
        bfs_first(n,a);
        ans=pos[b];
     //   printf("Pos %d\n",pos[b]);
        for(i=0;i<n;i++){
            if(i!=a){
                r=bfs(i,n+2,pos[i],b);
                if(r>ans) ans=r;
            }
        }
        for(i=0;i<n;i++) node[i].clear();
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

