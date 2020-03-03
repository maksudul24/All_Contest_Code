#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 2200
using namespace std;

int check[SIZE],mark[SIZE];

bool train(int n,int s,vector<int> adj[])
{

    int u,v,length;
    queue<int> q;
    q.push(1);
    memset(mark,0,sizeof mark);
    while(!q.empty()){
        u=q.front();
        q.pop();
        length=adj[u].size();
        if(u==s || u==s+n) return true;
        for(v=0;v<length;v++){
               if(mark[adj[u][v]]==0){
                    mark[adj[u][v]]=-1;
                    q.push(adj[u][v]);
                }
        }
    }
    return false;

}

int main()
{
    int i,j,n,x,s,temp_x=1,temp;
    bool sw;
    vector <int> v[SIZE];
   //  freopen("in.txt","r",stdin);
    scanf("%d %d",&n,&s);
    scanf("%d",&temp_x);
    check[1]=temp_x;
    for(i=2;i<=n;i++){
        scanf("%d",&x);
        if(x==1){
            v[temp_x].push_back(i);
            temp_x=i;
        }
        check[i]=x;
    }
    scanf("%d",&temp_x);
    check[n+1]=temp_x;
    if(temp_x==1 && check[1]==1){
        v[1].push_back(n+1);
        temp=1+n;
    }
    for(i=2;i<=n;i++){
        scanf("%d",&x);
        if(x==1){
            if(temp_x) v[i+n].push_back(temp);
            temp_x=x;
            temp=i+n;
            if(check[i]==1) v[i].push_back(i+n);
        }
        check[i+n]=x;
    }

    if(train(n,s,v)) printf("YES\n");
    else printf("NO\n");
    return 0;
}

