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

int fx[]={2,2,-2,-2,1,-1,1,-1},fy[]={1,-1,1,-1,2,2,-2,-2},d[20][20],vis[20][20],pos_x,pos_y;
//d means destination from source.

int bfs(int sx,int sy)
{

    memset(vis,0,sizeof vis);
    memset(d,0,sizeof(d));
    vis[sx][sy]=1;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        for(int k=0;k<8;k++)
        {
            int tx=top.uu+fx[k];
            int ty=top.vv+fy[k];
            if(tx>=0 and tx<8 and ty>=0 and ty<8 and vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
                d[tx][ty]=d[top.uu][top.vv]+1;
                q.push(pii(tx,ty));
                if(pos_x==tx and pos_y==ty) break;
            }
        }
    }
    return d[pos_x][pos_y];
}

int main()
{
    int i,j,n,cas=0,ts,cor_x,cor_y,start_x,start_y;
    char ara[5],ara2[5];
    freopen("in.txt","r",stdin);
    while(scanf("%s %s",ara,ara2)!=EOF){
            start_y=ara[0]-'a';
            start_x=ara[1]-'1';
            pos_y=ara2[0]-'a';
            pos_x=ara2[1]-'1';
            printf("To get from %s to %s takes %d knight moves.\n",ara,ara2,bfs(start_x,start_y));
    }
    return 0;
}
