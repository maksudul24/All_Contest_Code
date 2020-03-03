#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 10000
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int prime[10000],nprime;
char mark[10100];
vector <int> node[SIZE];


void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}

int bfs(int source,int target)
{
    int u,v,level[SIZE];
    memset(level,-1,sizeof(level));
    level[source]=0;
    queue<int> q;
    if(source==target){
        return 0;
    }
    if(source>target){
        return -1;
    }
    q.push(source);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(v=0;v<node[u].size();v++){
            if(node[u][v]<=target && level[node[u][v]]==-1){
                level[node[u][v]]=level[u]+1;
                if(node[u][v]==target){
                    return level[node[u][v]];
                }
                q.push(node[u][v]);
            }
        }

    }
    return -1;
}


int main()
{
    int i,j,cas=0,ts,ans,k,n,m,limit;
   FI,FO;
   sieve(1320);
   for(i=4;i<1005;i++){
        limit=i/2+2;
        for(j=0;prime[j]<limit;j++){
            if(i%prime[j]==0){
                node[i].push_back(i+prime[j]);
            }
        }
   }
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&m);
        printf("Case %d: %d\n",++cas,bfs(n,m));
    }
    return 0;
}

