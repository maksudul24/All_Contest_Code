#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define uu x
#define vv y
#define zz z
#define SIZE 50

using namespace std;

struct pii
{
    int x;
    int y;
    int z;

    pii(int n1, int n2, int n3) : x(n1), y(n2), z(n3)
    {
    }

};

int fx[]={1,-1,0,0,0,0};
int fy[]={0,0,1,-1,0,0};
int fz[]={0,0,0,0,1,-1};
int cell[SIZE][SIZE][SIZE];
int d[SIZE][SIZE][SIZE],vis[SIZE][SIZE][SIZE]; //d means destination from source.
int row,col,lev;
int bfs(int sx,int sy,int sz,int ex,int ey,int ez) //Source node is in [sx][sy] cell.
{
	memset(vis,0,sizeof vis);
	vis[sx][sy][sz]=1;
	queue<pii>q;
	q.push(pii(sx,sy,sz));
	while(!q.empty())
	{
		pii top=q.front(); q.pop();
		for(int k=0;k<6;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k];
			int tz=top.zz+fz[k];
			if(tx>=0 and tx<lev and ty>=0 and ty<row and tz>=0 and tz<col and cell[tx][ty][tz]!=0 and vis[tx][ty][tz]==0)
			{
				vis[tx][ty][tz]=1;
				d[tx][ty][tz]=d[top.uu][top.vv][top.zz]+1;
				if(tx==ex && ty==ey && tz==ez){
                    while(!q.empty()) q.pop();
                    return d[tx][ty][tz];
				}
				q.push(pii(tx,ty,tz));
			}
		}
	}
	return -1;
}


int main()
{
    int i,j,n,cas=0,ts,start_x,start_y,end_x,end_y,ans,k,start_z,end_z;
    char ara[SIZE];
   // freopen("in.txt","r",stdin);
    while(1){
        scanf("%d %d %d",&lev,&row,&col);
        if(lev==0 && row==0 && col==0) break;
        memset(cell,0,sizeof(cell));
        memset(d,0,sizeof(d));
        for(i=0;i<lev;i++){
            for(j=0;j<row;j++){
                scanf("%s",ara);
                for(k=0;k<col;k++){
                    if(ara[k]=='S'){
                        start_x=i;
                        start_y=j;
                        start_z=k;
                        cell[i][j][k]=1;
                    }
                    else if(ara[k]=='E'){
                        end_z=k;
                        end_x=i;
                        end_y=j;
                        cell[i][j][k]=1;
                    }
                    else if(ara[k]=='.') cell[i][j][k]=1;
                }
            }
        }
        ans=bfs(start_x,start_y,start_z,end_x,end_y,end_z);
        if(ans==-1) printf("Trapped!\n");
        else printf("Escaped in %d minute(s).\n",ans);
    }
    return 0;
}

