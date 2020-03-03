#include<bits/stdc++.h>
#define SIZE 550
using namespace std;

int d[SIZE],cost[SIZE][SIZE];

struct compare
{
  bool operator()(const int& l, const int& r)
  {
      return l > r;
  }
};

void set_inf(int ara[])
{
    for(int i=0;i<SIZE;i++) ara[i]=INFINITY;
}

void dijkstra(vector<int> adj[],int n)
{
    int u,v;
    priority_queue<int,vector<int>,compare> pq;
    set_inf(d);
    d[n]=0;
    pq.push(n);
    while(!pq.empty()){
        u=pq.top();
        pq.pop();
        for(v=0;v<adj[u].size();v++){
            if(cost[u][v]+d[u]<d[adj[u][v]]){
                d[adj[u][v]]=d[u]+cost[u][v];
                pq.push(adj[u][v]);
            }
        }
    }
}
int main()
{
    int ts,cas=0,n,m,x,y,temp,i,t;
    vector <int> v[SIZE];
     freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++){
            scanf("%d %d %d",&x,&y,&temp);
            v[x].push_back(y);
            v[y].push_back(x);
            cost[x][y]=temp;
            cost[y][x]=temp;
        }
        scanf("%d",&t);
        dijkstra(v,t);
        printf("Case %d:\n",++cas);
        for(i=0;i<n;i++) printf("%d\n",d[i]);
    }
}

