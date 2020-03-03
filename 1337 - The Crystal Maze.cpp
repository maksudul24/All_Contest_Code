#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 510
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[SIZE][SIZE];
int d[SIZE][SIZE],vis[SIZE][SIZE],block[SIZE][SIZE]; //d means destination from source.
int row,col;
void bfs(int sx,int sy) //Source node is in [sx][sy] cell.
{
	int cnt=0,tx,ty,k;
	pii top;
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	queue<pii>q;
	if(cell[sx][sy]==1){
            cnt++;
	}
	q.push(pii(sx,sy));
	while(!q.empty())
	{
        top=q.front(); q.pop();
		for( k=0;k<4;k++)
		{
			tx=top.uu+fx[k];
            ty=top.vv+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				if(cell[tx][ty]==1){
                    cnt++;
				}
				d[tx][ty]=d[top.uu][top.vv]+1;
				q.push(pii(tx,ty));
			}
		}
	}
	memset(vis,0,sizeof(vis));
	vis[sx][sy]=1;
	block[sx][sy]=cnt;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
        top=q.front(); q.pop();
		for( k=0;k<4;k++)
		{
			tx=top.uu+fx[k];
            ty=top.vv+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				block[tx][ty]=cnt;
				d[tx][ty]=d[top.uu][top.vv]+1;
				q.push(pii(tx,ty));
			}
		}
	}
}



int main()
{
    int i,j,cas=0,ts,ans,k,n,m,x,y;
    char line[SIZE];
    FI;
    scanf("%d",&ts);
    while(ts--){
            memset(block,-1,sizeof(block));
        scanf("%d %d %d",&row,&col,&n);
        for(i=0;i<row;i++){
            scanf(" %s",line);
            for(j=0;j<col;j++){
                if(line[j]=='#'){
                    cell[i][j]=-1;
                }
                else if(line[j]=='C'){
                    cell[i][j]=1;
                }
                else cell[i][j]=0;
            }
        }
        printf("Case %d:\n",++cas);
        for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            x--;
            y--;
            if(block[x][y]==-1){
                bfs(x,y);
                ans=block[x][y];
            }
            else ans=block[x][y];
            printf("%d\n",ans);
        }
    }
    return 0;
}

