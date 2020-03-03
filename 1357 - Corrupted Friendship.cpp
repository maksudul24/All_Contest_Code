#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 100100
#define uu first
#define vv second
#define pii pair<int,int>
#define dbug(a, args...) printf("Line:%d\n" a,__LINE__, ##args)
using namespace std;

 vector<int> node[SIZE];
 queue<int>q;

 bool comp(int a,int b)
 {
     return a<b;
 }

void bfs(int n)
{
    int u,v,level[SIZE],length,cnt=0,ara[SIZE],i,temp,ans=0;
    q.push(1);
    memset(level,-1,sizeof(level));
    level[1]=1;
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        for(v=0;v<length;v++){
                if(level[node[u][v]]==-1){
                    cnt++;
                    if(u!=1) ans++;
                    level[node[u][v]]=level[u]+1;
                    q.push(node[u][v]);
                }
        }
    }
    for(i=1;i<=n;i++){
        node[i].clear();
    }
    temp=n-2;
    if(temp<0) temp=0;
    temp=(temp*(temp+1))/2;
    printf("%d %d\n",cnt,temp-ans);
}

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,x,y;
    FI;
    scanf("%d",&ts);
    while(ts--){

        scanf("%d",&n);
        for(i=0;i<n-1;i++){
            scanf("%d %d",&x,&y);
            node[x].push_back(y);
            node[y].push_back(x);
        }
        printf("Case %d: ",++cas);
        bfs(n);

    }
    return 0;
}

