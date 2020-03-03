#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int level[10000];
int mark[10000];
int main()
{
    int i,j,n,cas=0,ts,x,u,v,length,edge,prev,a,TTL,cnt,y,b,eliminated,node_count,n_nodes,sw=1,test_cnt,my_cnt;
    freopen("in.txt","r",stdin);
    vector<int> node[10000],sim;
    while(1){
        scanf("%d",&n);
        n_nodes=0;
        sw=1;
        if(!n) break;
        for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            if(mark[x]!=2){
                mark[x]=2;
                n_nodes++;
            }
            if(mark[y]!=2){
                n_nodes++;
                mark[y]=2;
            }
            node[x].push_back(y);
            node[y].push_back(x);
        }
        queue<int> q;
        while(1){
            scanf("%d %d",&a,&TTL);
            if(!a && !TTL) break;
            cnt=0;
            for(i=0;i<10000;i++) level[i]=-1;
            q.push(a);  //bfs stariting
            level[a]=0;
            node_count=1;
            while(!q.empty()){
                u=q.front();
                mark[u]=1;
                q.pop();
                length=node[u].size();
                for(v=0;v<length;v++){
                    if(level[node[u][v]]==-1){
                        node_count++;
                        mark[node[u][v]]=1;
                        level[node[u][v]]=level[u]+1;
                        q.push(node[u][v]);
                        if(level[node[u][v]]>TTL) cnt++;
                    }
                }
            }
            if(mark[a]==1) eliminated=n_nodes-node_count;
            else eliminated=n_nodes-node_count+1;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cas,cnt+eliminated,a,TTL);
        }
        memset(mark,0,sizeof(mark));
        for(i=0;i<10000;i++) node[i].clear();
        sim.clear();
    }
    return 0;
}

