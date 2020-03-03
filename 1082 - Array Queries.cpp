#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 210
#define uu first
#define vv second
#define pii pair<int,int>
#define dbug(a, args...) printf("Line:%d \n" a,__LINE__, ##args)
#define mx 100001
using namespace std;

int ara[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    printf("%d\n",node);
    if (b == e) {
        tree[node] = ara[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    if(tree[Left]<tree[Right]) tree[node]=tree[Left];
    else tree[node]=tree[Right];
}


void see(int node, int b, int e)
{
    if (b == e) {
        printf("%d\n",tree[node]);
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    printf("%d\n",tree[node]);
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    if(p1<p2) return p1;
    return p2;
}
int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,x,y;
    FI;
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        printf("Case %d:\n",++cas);
        sort(ara,ara+n);
        dbug();
        init(1,1,n);
     //   see(1,1,n);
       dbug();
        for(i=0;i<m;i++){
            scanf("%d %d",&x,&y);
            printf("%d\n",query(1,1,n,x,y));
        }
    }
    return 0;
}
