#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 100100
using namespace std;

vector<int> v[SIZE];
int anc[SIZE],ans[SIZE],sz=0;
bool mark[SIZE];
int level[SIZE];
void bfs(int n)
{
    queue<int>q;
    memset(level,0,sizeof(level));
    int x,y,cnt;
    q.push(n);
    level[n]=1;
    while(!q.empty()){
        cnt=0;
        x=q.front();
        n=v[x].size();
        q.pop();
        for(y=0;y<n;y++){
            if(level[v[x][y]]==0){
                level[v[x][y]]=level[x]+1;
                q.push(v[x][y]);
            }
            if(mark[v[x][y]]==true && v[x][y]!=anc[x]) cnt++;
        }
        if(mark[x]){
            if(cnt==n-1 || (cnt==1 && n==1)){
                ans[sz++]=x;
            }
        }
    }
}

int main()
{
    int i,n,root,x,y;
   // FI;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        anc[i]=x;
        if(x>0){
            v[i].push_back(x);
            v[x].push_back(i);
            if(y==1) mark[i]=true;
            else mark[i]=false;
        }
        else if(x==-1){
            root=i;
        }
    }
    bfs(root);
    sort(ans,ans+sz);
     if(sz){
      for(i=0;i<sz;i++){
        printf("%d",ans[i]);
        if(i!=sz-1) printf(" ");
      }
    }
    else printf("-1");
    printf("\n");

    return 0;
}

