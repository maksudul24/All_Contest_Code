#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int level[1000];
void path(int n);
int main()
{
    int i,j,n,cas=0,ts,x,u,v,length,dis,destination,edge,prev,wrong,y,sw;
    freopen("in.txt","r",stdin);
    vector<int> node[210];
    while(1){
        scanf("%d",&n);
        if(!n) break;
        scanf("%d",&edge);
        for(i=0;i<edge;i++){
            scanf("%d %d",&x,&y);
            node[x].push_back(y);
        }
        queue<int> q;
        for(i=0;i<300;i++) level[i]=-1;
        q.push(0);  //bfs stariting
        level[0]=1;
        wrong=0;
        while(!q.empty()){
            u=q.front();
            q.pop();
            length=node[u].size();
            for(v=0;v<length;v++){
                if(level[node[u][v]]==-1){
                    level[node[u][v]]=level[u]+1;
                    q.push(node[u][v]);
                }
                else if(level[node[u][v]]%2==level[u]%2 && level[node[u][v]]!=level[u]){
                        wrong=1;
                     //   printf("Node:%d = level:%d to Node:%d = level:%d\n",u,level[u],node[u][v],level[node[u][v]]);
                        break;
                }
            }
            if(wrong) break;
        }
        if(wrong) printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
        for(i=0;i<210;i++) node[i].clear();
    }
    return 0;
}
