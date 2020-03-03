#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 10110
#define uu first
#define vv second
#define pii pair<int,int>
#define dbg printf("YES\n")
#define dbg1 printf("YES1\n")
#define dbg2 printf("YES2\n")
#define dbg3 printf("YES3\n")

using namespace std;
int ara[SIZE];
bool mark[SIZE];
bool bfs(vector<int> nod[],int source,int target)
{
    int u,v,len,cnt,sum;
    queue<int> q;
    q.push(source);
    sum=ara[source];
    mark[source]=false;
    cnt=1;
    while(!q.empty()){
        u=q.front();
        q.pop();
        len=nod[u].size();
        for(v=0;v<len;v++){
            if(mark[nod[u][v]]){
               //     printf("%d ",nod[u][v]);
                mark[nod[u][v]]=false;
                sum+=ara[nod[u][v]];
                q.push(nod[u][v]);
                cnt++;
            }
        }
    }
//    printf("\nsum:%d cnt:%d\n",sum,cnt);
    if(sum%cnt==0){
        sum=sum/cnt;
        if(sum==target){
            return true;
        }
    }
    return false;

}


int main()
{
    int i,j,cas=0,ts,ans,n,m,sum,x,y,target,temp[SIZE],h;
 //   FI;
    bool sw;
    vector<int> node[SIZE];
    scanf("%d",&ts);
    while(ts--){
        sum=0;
        sw=true;
        memset(mark,true,sizeof(mark));
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        for(i=0;i<m;i++){
                scanf("%d %d",&x,&y);
                node[y].push_back(x);
                node[x].push_back(y);
        }
        if(sum%n==0){
            memset(mark,true,sizeof(mark));
            target=sum/n;
            for(i=1;i<=n;i++){
                if(mark[i]){
                    sw=bfs(node,i,target);
                    if(!sw) break;
                }
            }
            if(sw) printf("Case %d: Yes\n",++cas);
            else printf("Case %d: No\n",++cas);
        }
        else printf("Case %d: No\n",++cas);
        for(i=0;i<n;i++){
            node[temp[i]].clear();
        }

    }
    return 0;
}

