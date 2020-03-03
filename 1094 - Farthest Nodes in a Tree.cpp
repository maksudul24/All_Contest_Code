#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 30100
using namespace std;

struct total{
    int big,sec;

};
int level[SIZE];


vector<int> node[SIZE],cost[SIZE];
int bfs_cost(int n)
{
    int u,v,i,length,max_value=0,temp;
    struct total prop[SIZE];
    for(i=0;i<=n;i++){
        level[i]=0;
        prop[i].big=0;
        prop[i].sec=0;
    }
    queue<int> q;
    temp=-1;
    for(i=0;i<n;i++){
        if(node[i].size()==1){
           if(temp!=-1){
                q.push(temp);
                level[temp]=1;
           }
           temp=i;
        }
    }
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        for(v=0;v<length;v++){
            if(level[node[u][v]]==0){
                level[node[u][v]]=level[u]+1;
                q.push(node[u][v]);
            }
            if(level[node[u][v]]>level[u]){
                    temp=prop[node[u][v]].big+cost[u][v];
                if(temp>prop[u].big) prop[u].big=temp;
                else if(temp>prop[u].sec) prop[u].sec=temp;
            }
        }
        temp=prop[u].big+prop[u].sec;
        if(temp>max_value) max_value=temp;
    }
    for(i=0;i<n;i++) node[i].clear();
    return max_value;
}

int main()
{
    int i,j,n,cas=0,ts,x,y,w;
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        for(i=0;i<n-1;i++){
            scanf("%d %d %d",&x,&y,&w);
            node[x].push_back(y);
            node[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);

        }

        printf("Case %d: %d\n",++cas,bfs_cost(n));
    }
    return 0;
}
