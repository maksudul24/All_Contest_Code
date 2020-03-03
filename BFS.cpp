#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define uu first
#define vv second
using namespace std;
int level[1000];
int previous[1000];
void path(int n);
int main()
{
    int i,j,n,cas=0,ts,x,u,v,length,dis,destination;
  //  freopen("test.txt","r",stdin);
    vector<int> node[100];
    cout<<"The Number of Nodes: ";
    scanf("%d",&n);
    cout<<"Enter -1 to Encounter edge input\n";
    for(i=1;i<=n;i++){
        cout<<"Enter The Edges of Node "<<i<<endl;
        x=10000;
        while(x>0){
            scanf("%d",&x);
            if(x>0){
                node[i].push_back(x);
            }
        }
    }
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
                if(node[u][v]==destination) dis=level[node[u][v]];


            }

        }
    }
 /*   for(i=1;i<=n;i++){
        x=node[i].size();
        cout<<"Node :"<<i<<endl;
        while(x--) printf("%d ",node[i][x]);
        cout<<endl;
    } */
    printf("Path Length: %d\nAnd The Path is\n",dis);
    path(destination);
    printf("%d\n",destination);
    return 0;
}
void path(int n)
{
    if(previous[n]==0) return;
    int x=previous[n];
    path(x);
    printf("%d->",x);
}
