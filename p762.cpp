#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int level[1000];
int main()
{
    int i,j,n,cas=0,ts,x,u,v,length,dis,destination;
  //  freopen("test.txt","r",stdin);
    vector<int> node[100];
    queue<int> q;
    for(i=0;i<1000;i++) level[i]=1000000;
    printf("Enter The Destination Node\n");
    scanf("%d",&destination);
    q.push(1);
    level[1]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=node[u].size();
        for(v=0;v<length;v++){
            if(level[node[u][v]]==1000000){
                level[node[u][v]]=level[u]+1;
                previous[node[u][v]]=u;
                q.push(node[u][v]);

            }

        }
    }
    return 0;
}

int main()
{
    int i,j,n,cas=0,ts;
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){

        }
    }
    return 0;
}

