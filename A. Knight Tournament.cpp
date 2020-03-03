#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define red(i, a, b) for (int i = (a); i >= (b); --i)
#define clr( x , y ) memset(x,y,sizeof(x))
#define sqr(x) ((x) * (x))
typedef long long lint;
int n,m,l[301000],r[301000],x[301000],k=0,ll,rr,xx;

struct nodd
{
    int l,r,lc,rc,x,m;
} t[601000];

void init()
{
    scanf("%d%d",&n,&m);
    rep(i,1,m) scanf("%d%d%d",&l[i],&r[i],&x[i]);
}

void build(int l,int r,int s)
{
    t[s].l = l; t[s].r = r;
    t[s].x = 0; t[s].m = ( l + r ) / 2;
    if ( l == r ) return;
    t[s].lc = ++k; build(l,t[s].m,k);
    t[s].rc = ++k; build(t[s].m+1,r,k);
}

void change(int k)
{
    if ( t[k].l >= ll && t[k].r <= rr ) {
        t[k].x = xx;
        return;
    }
    if ( t[k].x ) {
        t[ t[k].lc ].x = t[ t[k].rc ].x = t[k].x;
        t[k].x = 0;
    }
    if ( t[k].m >= ll ) change( t[k].lc );
    if ( t[k].m < rr ) change( t[k].rc );
}

int ask(int k)
{
    if ( t[k].l == t[k].r || t[k].x ) return t[k].x;
    if ( t[k].m >= ll ) return ask( t[k].lc ); else return ask( t[k].rc );
}

void work()
{
    build(1,n,0);
    red(i,m,1) {
        ll = l[i]; rr = x[i] - 1;
        xx = x[i];
        if ( ll <= rr ) change(0);
        ll = x[i] + 1; rr = r[i];
        if ( ll <= rr ) change(0);
    }
    rep(i,1,n) {
        if ( i > 1 ) printf(" ");
        ll = rr = i;
        printf("%d",ask(0));
    }
}

int main()
{
    init();
    work();
    return 0;
}
