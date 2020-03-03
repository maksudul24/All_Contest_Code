
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

int fx[]={1,-1,0,0},fy[]={0,0,1,-1},d[1010][1020],vis[1010][1020],pos_x,pos_y;
//d means destination from source.
int cell[1010][1020];

int row,col;
int bfs(int sx,int sy) //Source node is in [sx][sy] cell.
{
	memset(vis,0,sizeof vis);
	memset(d,0,sizeof(d));
	vis[sx][sy]=1;
	queue<pii>q; //A queue containing STL pairs
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front(); q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k]; //Neighbor cell [tx][ty]
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0) //Check if the neighbor is valid and not visited before.
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				if(tx==pos_x && tx==pos_y) break;
				q.push(pii(tx,ty)); //Pushing a new pair in the queue
			}
		}
	}
	return d[pos_x][pos_y];
}

int main()
{
    int i,j,n,ts,cor_x,cor_y,start_x,start_y;
    char ara[5],ara2[5];
    freopen("in.txt","r",stdin);
    while(1){
            memset(cell,0,sizeof(cell));
            scanf("%d %d",&row,&col);
            if(row==0 && col==0) break;
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d %d",&cor_x,&ts);
                for(j=0;j<ts;j++){
                    scanf("%d",&cor_y);
                    cell[cor_y][cor_x]=-1;
                }
            }
            scanf("%d %d %d %d",&start_y,&start_x,&pos_y,&pos_x);
            printf("%d\n",bfs(start_x,start_y));
    }
    return 0;
}
