#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 10000
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;
struct node{
    int i,j;
};

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[SIZE][SIZE];
int d[SIZE][SIZE],vis[SIZE][SIZE],mark[SIZE][SIZE]; //d means destination from source.
int row,col;
void bfs(int sx,int sy) //Source node is in [sx][sy] cell.
{
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	d[sx][sy]=0;
	mark[sx][sy]=1;
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
                if(d[tx][ty]<mark[tx][ty]){
                    mark[tx][ty]=d[tx][ty];
                    q.push(pii(tx,ty));
                }
			}
		}
	}
}


int find_jane(int sx,int sy)
{
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	d[sx][sy]=0;
	mark[sx][sy]=0;
	queue<pii>q;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front(); q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k];
			if(tx>=0 and ty>=0 and cell[tx][ty]!=-1 and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				if(tx>=row || ty>=col){
                        return d[tx][ty];
                }
                if(d[tx][ty]<mark[tx][ty]){
                    q.push(pii(tx,ty));
                }
			}
            else if(tx<0 || ty<0){
                 if(tx<0){
                    tx=0;
                 }
                 if(ty<0){
                    ty=0;
                 }
                 return d[tx][ty]+1;
            }
		}
	}
	return -1;
}



int main()
{
    int i,j,cas=0,ts,ans,n,m,temp;
    char ara[1000];
    int jane_x,jane_y,ara_x[SIZE],ara_y[SIZE];
    FI,FO;
    scanf("%d",&ts);
    while(ts--){
            memset(cell,0,sizeof(cell));
            for(i=0;i<SIZE-2;i++){
                for(j=0;j<SIZE-2;j++){
                    mark[i][j]=123456789;
                }
        }
            ans=1;
             printf("Case:%d\n",++cas);
        scanf("%d %d",&n,&m);
        row=n,col=m;
        temp=0;
        for(i=0;i<n;i++){
            scanf(" %s",ara);
            for(j=0;j<m;j++){
                if(ara[j]=='#'){
                    cell[i][j]=-1;
                    mark[i][j]=-1;
                }
                else if(ara[j]=='J'){
                    jane_x=i;
                    jane_y=j;
                }
                else if(ara[j]=='F'){
                    printf("i:%d j:%d temp:%d\n",i,j,temp);
                    ara_x[temp]=i;
                    ara_y[temp]=j;
                     temp++;
                }
            }
        }
     /*   for(i=0;i<temp;i++){
            bfs(ara_x[i],ara_y[i]);
        }
        ans=find_jane(jane_x,jane_y);
        if(ans==-1) printf("Case %d: IMPOSSIBLE\n",++cas);
        else printf("Case %d: %d\n",++cas,ans);
      /*   for(i=0;i<n+2;i++){
                for(j=0;j<m+2;j++){
                    printf("%d ",mark[i][j]);
                }
                cout<<endl;
        } */
     }
    return 0;
}
