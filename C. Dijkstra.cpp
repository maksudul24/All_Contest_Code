#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 100100
using namespace std;


int dist[SIZE];
vector<int> path;

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


void bfs_cost(int n,vector<edge> adj[SIZE])
{
    int i,length;
    priority_queue<Node> q;
    for(int i=0;i<=n;i++) dist[i]=INT_MAX;
    q.push(Node(1,0));
    while(!q.empty()){
        Node u=q.top();
        q.pop();
        if(u.cost!=dist[u.a_t]) continue;
        path.push_back(u.a_t);
        for(edge e : adj[u.a_t]){
            if(dist[e.v]>u.cost+e.w){
                dist[e.v]=u.cost+e.w;
                q.push(Node(e.v,dist[e.v]));
            }
        }
    }
}

int main()
{
    int i,j,n,cas=0,ts,m,x,y,cost;
    vector<edge> v[SIZE];
    edge temp;
    freopen("in.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d %d %d",&x,&y,&cost);
        temp.v=y;
        temp.w=cost;
        v[x].push_back(temp);
        temp.v=x;
        v[y].push_back(temp);
    }
    bfs_cost(n,v);
    for(i=0;i<path.size();i++) printf("%d ",path[i]);
    cout<<endl;
    return 0;
}
