#include<bits/stdc++.h>
#define SIZE 550
using namespace std;

int d[SIZE],cost[SIZE][SIZE],dist[SIZE];

struct Node{
        int a_t,cost;
        Node(int _at,int _cost){
            a_t=_at;
            cost=_cost;
        }
};
bool operator<(Node A,Node B) {
    return A.cost>B.cost;
}
struct edge{
    int v,w;
};


void bfs_cost(int n,vector<edge> adj[])
{
    int i,length;
    Node u(n,0);
    priority_queue<Node> q;
    for(int i=0;i<=n;i++) d[i]=INT_MAX;
    q.push(Node(n,0));
    while(!q.empty()){
        u=q.top();
        q.pop();
     //   if(u.cost!=d[u.a_t]) continue;
        for(edge e : adj[u.a_t]){
            if(d[e.v]>u.cost+e.w){
                d[e.v]=u.cost+e.w;
                printf("node:%d cost: %d\n",d[e.v],e.v);
                q.push(Node(e.v,dist[e.v]));
            }
        }
    }
}
int main()
{
    int ts,cas=0,n,m,x,y,temp,i,t,test,temp_c;
    test=INFINITY;
    vector <edge> v[SIZE];
    edge w;
     freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&m);
        for(i=0;i<=n;i++)
            for(int j=0;j<=n;j++) cost[i][j]=20200;
        for(i=0;i<m;i++){
            scanf("%d %d %d",&x,&y,&temp);
            if(cost[x][y]>temp){
                    cost[x][y]=temp;
                    cost[y][x]=temp;
            }
            else temp=cost[x][y];
            w.v=y;
            w.w=temp;
            v[x].push_back(w);
            w.v=x;
            v[y].push_back(w);
        }
        scanf("%d",&t);
        for(i=0;i<n;i++){
            printf("From %d to \n",i);
            for(edge m : v[i]){
                printf(" v: %d cost: %d\n",m.v,m.w);
            }
        }
         bfs_cost(t,v);
        printf("Case %d:\n",++cas);
        for(i=0;i<n;i++){
            if(d[i]<test) printf("%d\n",d[i]);
            else printf("Impossible\n");
        }
        for(i=0;i<m;i++) v[i].clear();
    }
}

