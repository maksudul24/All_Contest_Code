#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 10010
#define uu first
#define vv second
#define pii pair<int,int>
#define dbg(a, args...) printf("Line:%d " a,__LINE__, ##args)
using namespace std;

struct d{
    int cost;
    int num;
    double rat;

};

bool mark[SIZE];

bool cmp2(d a,d b){
    return a.cost<b.cost;
}

bool cmp(d a,d b)
{
    return a.rat>b.rat;
}

int min_v=0;
int bfs(int source,vector<int> node[])
{
    int level[SIZE],u,v,cnt=1,length;
    memset(level,-1,sizeof(level));
    queue<int> q;
    q.push(source);
    level[source]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        for(v=0;v<length;v++){
            if(level[node[u][v]]==-1){
                    mark[node[u][v]]=false;
                    cnt++;
                    if(node[u][v]<min_v) min_v=node[u][v];
                    level[node[u][v]]=level[u]+1;
                    q.push(node[u][v]);
            }

        }
    }
    return cnt;
}


int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,h,x,y,k,cost=0;
    FI;
    struct d ara[SIZE];
    vector<int> node[SIZE];
    h=0;
    scanf("%d %d %d",&n,&m,&k);
    memset(mark,true,sizeof(mark));
    for(i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        node[x].push_back(y);
        node[y].push_back(x);
    }
    h=0;
    for(i=1;i<=n;i++){
        if(mark[i]){
            mark[i]=false;
            min_v=i;
            ans=bfs(i,node);
            ara[h].cost=min_v;
            ara[h].num=ans;
            ara[h].rat=(1.0*ans)/(1.0*min_v);
            h++;
        }
    }
    sort(ara,ara+h,cmp2);
    sort(ara,ara+h,cmp);
    ans=0;
    for(i=0;i<h;i++){
      //  cout<<ara[i].cost<<" "<<ara[i].num<<" "<<ara[i].rat<<endl;
        ans+=ara[i].cost;
        cost+=ara[i].num;
       if(cost>=k) break;
    }
    printf("%d\n",ans);
    return 0;
}

