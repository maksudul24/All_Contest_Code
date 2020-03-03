#define SIZE 100

int d[SIZE];

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
    Node u(n,0);
    priority_queue<Node> q;
    for(int i=0;i<SIZE;i++) d[i]=INT_MAX;
    q.push(Node(n,0));
    while(!q.empty()){
        u=q.top();
        q.pop();
        if(u.cost!=d[u.a_t]) continue;
        for(edge e : adj[u.a_t]){
            if(d[e.v]>u.cost+e.w){
                d[e.v]=u.cost+e.w;
                q.push(Node(e.v,d[e.v]));
            }
        }
    }
}
