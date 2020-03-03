#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 100
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

struct node{
    int i,j;
};
//(x+1, y+2), (x+1, y-2), (x+2, y+1), (x+2, y-1), (x-1, y+2), (x-1, y-2), (x-2, y+1), (x-2, y-1),
int ans,max_v;
int fx[]={1,1,2,2,-1,-1,-2,-2};
int fy[]={2,-2,1,-1,2,-2,1,-1};
int cell[SIZE][SIZE];
int mark[SIZE][SIZE],vis[SIZE][SIZE],d[SIZE][SIZE],mesure[SIZE][SIZE]; //d means destination from source.
int row,col,target;


void bfs(int sx,int sy,int limit) //Source node is in [sx][sy] cell.
{
    int temp;
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	d[sx][sy]=0;
	queue<pii>q;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front(); q.pop();
		for(int k=0;k<8;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				temp=d[tx][ty]/limit;
				if(d[tx][ty]%limit!=0) temp++;
				mesure[tx][ty]+=temp;
				mark[tx][ty]++;
				if(mark[tx][ty]>=target){
                    if(mesure[tx][ty]<ans) ans=mesure[tx][ty];
				}
				q.push(pii(tx,ty));
			}
		}
	}
}


int main()
{
    int i,j,cas=0,ts,n,m,temp=0;
    char ara[SIZE];
    FI;
    scanf("%d",&ts);
    struct node cu[SIZE];
    while(ts--){
            max_v=0;
            temp=0;
        memset(cell,0,sizeof(cell));
        memset(mark,0,sizeof(mark));
        memset(mesure,0,sizeof(mesure));
        scanf("%d %d",&n,&m);
        row=n,col=m;
        ans=123456789;
        for(i=0;i<n;i++){
            scanf(" %s",ara);
            for(j=0;j<m;j++){
                if(ara[j]!='.'){
                    cell[i][j]=ara[j]-'0';
                    cu[temp].i=i;
                    cu[temp].j=j;
                    mark[i][j]=1;
                     temp++;
                }
                else mark[i][j]=0;
            }
        }
        target=temp;
        for(i=0;i<temp;i++){
            bfs(cu[i].i,cu[i].j,cell[cu[i].i][cu[i].j]);
        }
        if(ans==123456789) ans=-1;
        if(target==1 || target==0) ans=0;
        temp=0;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(mesure[i][j]==0){
                    temp++;
                }
            }
        }
        if(temp==row*col){
            if(target>1) ans=-1;
        }

        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

