#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,j,n,cas=0,ts,x,y,level[20010],u,v,length,ans,mark[20010],h,ara[20010],odd,even;
    bool sw;
  //  freopen("in.txt","r",stdin);
     vector<int> node[20001];
    scanf("%d",&ts);
    while(ts--){
        h=0;
        sw=true;
        memset(level,0,sizeof(level));
        memset(mark,0,sizeof(mark));
        scanf("%d",&n);
        for(i=1;i<=n;i++){
          scanf("%d %d",&x,&y);
          node[x].push_back(y);
          node[y].push_back(x);
          if(mark[x]==0){
                mark[x]=1;
                ara[h++]=x;
          }
          if(mark[y]==0){
                mark[y]=1;
                ara[h++]=y;
          }
        }
        queue<int> q;
        odd=0,even=0;
        ans=0;
        while(1){
            if(q.empty()){
                    if(odd>even) ans+=odd;
                    else ans+=even;
                    sw=true;
                    odd=1,even=0;
                for(i=0;i<h;i++){
                    if(mark[ara[i]]!=0){
                        level[ara[i]]=1;
                        q.push(ara[i]);
                        mark[ara[i]]=0;
                        sw=false;
                        break;
                    }
                }
                if(sw==true) break;
            }
            u=q.front();
            q.pop();
            length=node[u].size();
            for(v=0;v<length;v++){
                if(level[node[u][v]]==0){
                    level[node[u][v]]=level[u]+1;
                    if((level[u]+1)%2==0) even++;
                    else odd++;
                    q.push(node[u][v]);
                    mark[node[u][v]]=0;
                }

            }
            node[u].clear();
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

