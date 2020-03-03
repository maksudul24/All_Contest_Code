#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("in.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define uu x
#define vv y
#define zz z
#define SIZE 30

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
	memset(d,0,sizeof(d));
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
			if(tx<0) tx=25;
			else if(tx>25) tx=26;
			if(ty<0) ty=25;
			else if(ty>25) ty=0;
			if(tz<0) tz=25;
			else if(tz>25) tz=0;
			if(cell[tx][ty][tz]!=-1 and vis[tx][ty][tz]==0)
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
    int i,j,n,cas=0,ts,start_x,start_y,start_z,end_x,end_y,end_z,len_a,len_b,len_c,k,h;
    bool check;
    char line1[5],line2[5],a[30],b[30],c[30];
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        check=false;
        memset(cell,0,sizeof(cell));
        scanf("%s %s",line1,line2);
        start_x=line1[0]-'a';
        start_y=line1[1]-'a';
        start_z=line1[2]-'a';
        end_x=line2[0]-'a';
        end_y=line2[1]-'a';
        end_z=line2[2]-'a';
        scanf("%d",&n);
        for(h=0;h<n;h++){
            scanf("%s %s %s",a,b,c);
            len_a=strlen(a);
            len_b=strlen(b);
            len_c=strlen(c);
            for(i=0;i<len_a;i++)
                for(j=0;j<len_b;j++)
                    for(k=0;k<len_c;k++){
                            cell[a[i]-'a'][b[j]-'a'][c[k]-'a']=-1;
                            if((a[i]==line1[0] && b[j]==line1[1] && c[k]==line1[2]) || (a[i]==line2[0] && b[j]==line2[1] && c[k]==line2[2])) check=true;
                    }
        }
        if(check) printf("Case %d: -1\n",++cas);
        else if(strcmp(line1,line2)==0) printf("Case %d: 0\n",++cas);
        else printf("Case %d: %d\n",++cas,bfs(start_x,start_y,start_z,end_x,end_y,end_z));
    }
    return 0;
}

