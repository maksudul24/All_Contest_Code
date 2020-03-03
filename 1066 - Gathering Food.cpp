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

int start_x,start_y;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[SIZE][SIZE];
int d[SIZE][SIZE],vis[SIZE][SIZE],block[SIZE][SIZE]; //d means destination from source.
int row,col;
int bfs(int sx,int sy, int target) //Source node is in [sx][sy] cell.
{
	int tx,ty,k;
	pii top;
	memset(vis,0,sizeof vis);
	vis[sx][sy]=1;
	d[sx][sy]=0;
	queue<pii>q;
	cell[sx][sy]=0;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
        top=q.front(); q.pop();
		for( k=0;k<4;k++)
		{
			tx=top.uu+fx[k];
            ty=top.vv+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and (cell[tx][ty]==0 || cell[tx][ty]==target) and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				if(cell[tx][ty]==target){
                    start_x=tx,start_y=ty;
                    return d[tx][ty];
				}
				q.push(pii(tx,ty));
			}
		}
	}
	return 0;

}



int main()
{
    int i,j,cas=0,ts,ans,k,n,m,x,y,cnt,temp;
    char line[SIZE];
    bool sw;
    FI;
    scanf("%d",&ts);
    while(ts--){
           cnt=0;
           ans=0;
           sw=true;
        scanf("%d",&n);
        row=n;
        col=n;
        for(i=0;i<row;i++){
            scanf(" %s",line);
            for(j=0;j<col;j++){
                if(line[j]=='#'){
                    cell[i][j]=-1;
                }
                else if(line[j]=='.'){
                    cell[i][j]=0;
                }
                else{
                    cell[i][j]=line[j]-64; // say A=1,B=2,C=3.......
                    cnt++;
                }
                if(line[j]=='A'){
                    start_x=i;
                    start_y=j;
                }
            }
        }
        i=2;
        if(!cnt) sw=false;
        while(cnt!=1 && cnt){
            temp=bfs(start_x,start_y,i);
            if(temp==0){
                    sw=false;
                    break;
            }
            ans+=temp;
            i++;
            cnt--;
        }
        if(sw) printf("Case %d: %d\n",++cas,ans);
        else printf("Case %d: Impossible\n",++cas);

    }
    return 0;
}

