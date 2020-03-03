#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define uu first
#define vv second

using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[100][100];
int d[100][100],vis[100][100]; //d means destination from source.
int row,col;
void bfs(int sx,int sy) //Source node is in [sx][sy] cell.
{
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front(); q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				q.push(pii(tx,ty));
			}
		}
	}
}

int main()
{
    int i,j,n,cas=0,ts;
    freopen("in.txt","r",stdin),FO;
    scanf("%d",&ts);
    while(ts--){

        printf("Case %d: %d\n",++cas,);
    }
    return 0;
}

