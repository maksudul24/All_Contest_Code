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

int fx[]={1,-1,0,0},fy[]={0,0,1,-1},cell[100][100],d[100][100],vis[100][100],row,col;
//d means destination from source.

int bfs(int sx,int sy)
{
	int cnt=1;
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front();
        q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				cnt++;
				q.push(pii(tx,ty));
			}
		}
	}
	return cnt;
}

int main()
{
    int i,j,n,cas=0,ts,cor_x,cor_y,start_x,start_y;
    char ara[25];
  //  freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
            scanf("%d %d",&cor_x,&cor_y);
            col=cor_x,row=cor_y;
            memset(cell,0,sizeof(cell));
       //     getchar();
            for(i=0;i<cor_y;i++){
                    scanf("%s",ara);
                for(j=0;j<cor_x;j++){
                    if(ara[j]=='#') cell[i][j]=-1;
                    else if(ara[j]=='@'){
                            start_x=i;
                            start_y=j;
                    }
                }
            }

            printf("Case %d: %d\n",++cas,bfs(start_x,start_y));
    }
    return 0;
}

