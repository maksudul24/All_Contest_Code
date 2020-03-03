#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 300
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

vector<int> node[SIZE];
int cost[SIZE][SIZE];

int bfs(int nada,int source)
{
    int level[SIZE],u,v,sum=0,len;
    for(v=0;v<210;v++){
        level[v]=12345;
    }
    level[nada]=0;
    level[source]=0;
    queue<int> q;
    q.push(source);
    while(!q.empty()){
        u=q.front();
        q.pop();
    //    printf("From Node:%d\n",u);
        len=node[u].size();
        for(v=0;v<len;v++){
            if(level[node[u][v]]==12345){
                level[node[u][v]]=level[u]+1;
                q.push(node[u][v]);
                sum+=cost[u][node[u][v]];
               //  printf("To Node:%d,SUM:%d node:%d\n",node[u][v],cost[u][node[u][v]],level[node[u][v]]);
            }
        }

    }
    return sum;
}


int main()
{
    int i,j,cas=0,ts,ans,temp1,temp2,n,m,x,y,test[SIZE];
  //  FI;
    scanf("%d",&ts);
    while(ts--){
        ans=0;
        memset(test,0,sizeof(test));
        scanf("%d",&n);
        for(i=0;i<n+10;i++){
                node[i].clear();
        }
        for(i=0;i<n;i++){
            scanf("%d %d %d",&x,&y,&m);
            node[x].push_back(y);
            node[y].push_back(x);
            test[x]++;
            cost[x][y]=0;
            cost[y][x]=m;
        }
        for(i=1;i<=n;i++){
            if(test[i]==0){
                temp1=bfs(i,node[i][0]);
                temp1+=cost[i][node[i][0]];
                temp2=bfs(i,node[i][1]);
                temp2+=cost[i][node[i][1]];
                if(temp1<temp2){
                    ans=temp1;
                }
                else{
                    ans=temp2;
                }
                break;
            }
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}
