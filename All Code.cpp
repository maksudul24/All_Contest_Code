#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n;
    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%",&);

        printf("Case %d: \n",++cn,);
    }
    return 0;
}

///test PC
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n;
    char s[50];
    freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    gets(s);
    puts(s);
    P(ts);
    while(ts--){
        printf("Case %d: A\n",++cn);
    }
    return 0;
}


///Breaking string
char s[222],ar[14][22];
int n,ln;
void strbk()
{
    int i,j;
    ln=strlen(s);
    s[ln]=' ';
    n=0;
    for(i=0;i<ln;i++){
        for(j=i;j<=ln;j++){
            if(s[j]==' '){
                ar[n][j-i]=0;
                i=j;
                n++;
                break;

            }
            ar[n][j-i]=s[j];
        }
    }
}

///Factorial
ll ft[16];
void fact()
{
    int i=1;
    ft[0]=1;
    for(;i<13;i++)ft[i]=ft[i-1]*i;
}
///nCr
ll cr[902][902];
ll ncr(int n,int r)
{
    if(n==r)return 1;
    if(r==1)return n;
    if(cr[n][r])return cr[n][r];
    cr[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return cr[n][r];
}

///Sive

char ap[N];
void siv()
{
    int i,j,sq,p;
    sq=sqrt(N)+2;
    ap[1]=1;
    for(i=2;i<sq;i++){
        if(!ap[i]){
            for(j=i*i;j<N;j+=i)ap[j]=1;
        }
    }
}
///Bitwise Sive
//Odd numbers only
#define on(X) (mkr[X>>6]&(1<<((X&63)>>1)))
#define mark(X) mkr[X>>6]|=(1<<((X&63)>>1))
int mkr[10000090/64],N=10000002,prm[700000],in;
void bitwsiv()
{
    int i,j,rt=sqrt(N)+1;
    for(i=3;i<=rt;i+=2){
        if(!on(i)){
            for(j=i*i;j<=N;j+=i+i){
                mark(j);
            }
        }
    }
    prm[in++]=2;
    for(i=3;i<=N;i+=2){
        if(!on(i))prm[in++]=i;
    }
}

///Is prime
int iprm(int n)
{
    if(n==2)return 1;
    if(!(n%2)||n<2)return 0;
    int i,sq=sqrt(n)+2;
    for(i=3;i<sq;i+=2)if(!(n%i))return 0;
    return 1;
}


///bs
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
struct st{
    int a,b;
    bool operator < (const st&x)const {
        return a<x.a;
    }
}s1[555],s2;
int x;
int bns(st n)
{
    int a=0,b=x,m;
    for(;a<=b;){
        m=(a+b)/2;
        if(s1[m].a<n.a)a=m+1;
        else if(s1[m].a>n.a)b=m-1;
        else return m;
    }
    return -1;
}
int main()
{
    int i,j,a,b,ts,cn=0,n;
    freopen("test.txt","r",stdin);
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&s1[i].a);
        s1[i].b=i;
    }
    sort(s1,s1+x);
    while(scanf("%d",&s2.a)==1) {
        n=bns(s2);
        if(n!=-1)printf("Case %d: %d %d\n",++cn,s1[n].b,n);
        else puts("Not found!");
    }
    return 0;
}
///Graph---------------------------------------
///BFS
vector <int> ed[30003],ec[30003];
int lev[30003],vs[30003],nm;
int bfs(int s){
    int i,j,d,f,v;
    queue <int> q;
    q.push(s);
    MS(vs)
    //MS(lev)
    lev[s]=0;
    vs[s]=1;
    nm=s;
    while(!q.empty()){
        f=q.front();
        q.pop();
        for(i=0;i<ed[f].size();i++){
            v=ed[f][i];
            if(!vs[v]){
                vs[v]=1;
                q.push(v);
                lev[v]=lev[f]+ec[f][i];
                //P(f<<" "<<v<<" "<<lev[v])
                if(lev[v]>lev[nm])nm=v;
            }
        }
    }
    return nm;
}
///BFS in 2D Grid
int vs[22][22],lev[22][22],m,n;
char  ar[22][22];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int bfs(int fx,int fy)
{
    int i,v,x,y,md=0;
    queue <pii> q;
    pii pr;
    MS(vs)
    vs[fx][fy]=1;
    lev[fx][fy]=0;
    q.push(pii(fx,fy));
    while(!q.empty()){
        pr=q.front();
        fx=pr.first;
        fy=pr.second;
        q.pop();
        for(i=0;i<4;i++){
            x=fx+dx[i];
            y=fy+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(!vs[x][y]&&ar[x][y]!='#'&&ar[x][y]!='m'){
                q.push(pii(x,y));
                vs[x][y]=1;
                lev[x][y]=lev[fx][fy]+1;
                if(ar[x][y]=='a'||ar[x][y]=='b'||ar[x][y]=='c'){
                    md=max(md,lev[x][y]);
                }

            }
        }

    }
    return md;

}
///Union DF
vector <int> ed[20005];
int vs[20005],lev[20005],rp[20005],ex[20005],l1,l2;
int rep(int n)
{
    if(rp[n]==n)return n;
    return rp[n]=rep(rp[n]);
}
/set up/ rp[rep(b)]=rep(a);
///Finding Articulation Point
// preset in main()
MS(dt,-1)
ct=1;
root=1;
tarp=0;
par[1]=-1;
farp(1);
Done preset
//
vector <int> ed[10009];
bool artqp[10009];
int low[10009],dt[10009],par[10009],root,ct=1;
void farp(int u){
    low[u]=dt[u]=ct++;
    int i,v,child=0;
    for(i=0;i<ed[u].size();i++){
        v=ed[u][i];
        if(v==par[u])continue;
        if(dt[v]==-1){
            par[v]=u;
            farp(v);
            low[u]=min(low[u],low[v]);
            child++;
            if(low[v]>=dt[u]&&root!=u)artqp[u]=true;
        }
        else {
            low[u]=min(low[u],dt[v]);
        }
    }
    if(u==root&&child>1){
        artqp[u]=true;
    }
}

///Graph END------------------------------------------

///MOD Inverse

int fr[2000009],mr[2000009];
#define M 1000000007
pii extnuc(ll a,ll b)
{
    if(b==0)return pii(1,0);
    pii d=extnuc(b,a%b);
    return pii(d.second,d.first-d.second*(a/b));
}

ll modi(ll n)
{
    pii d=extnuc(n,M);
    return ((d.first%M)+M)%M;
}
//Now factorial & ft inverse with MOD
void fact()
{
    ll i;
    fr[0]=mr[0]=1;
    for(i=1;i<2000007;i++){
        fr[i]=(fr[i-1]*i)%M;
        mr[i]=(mr[i-1]*modi(i))%M;
        //P(fr[i])
    }
}

///KMP

char s1[100009],key[100009];
int lps[100009],lk=0,l1,l2;
void clps(char *key,int ln)
{
    int i=1,j=0;
    while(i<ln){
        if(key[i]==key[j]){
            lps[i]=++j;
            i++;
        }
        else {
            if(j)j=lps[j-1];
            else lps[i++]=0;
        }
    }
}

int src(char *txt,char *key){
int i=0,j=0;
    while(txt[i]){
        if(txt[i]==key[j]){
            j++;
            i++;
            if(j==lk){
                return i-j;
                j=lps[j-1];
            }
        }
        else{
            if(j)j=lps[j-1];
            else i++;
        }
    }
    return -1;
}

///Hashing string

// primes 9997913 9997927 / 999721 998743 995987  / 4871 4723 971 937
char hst[1000000];
int dohs(char *s,int M=999721)
{
    ll int i,pm=937,pp=1,hv=0;
    for(i=0;s[i];i++){
        pp=(pp*pm)%M;
        hv+=s[i]*pp;
        hv%=M;
    }
    return hv;
}

/// palindrome in a range(0  ln-1) using hashing
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
ll hst[1000000],rhst[1000000],ln,pr[1000];
// primes 9997913 9997927 / 999721 998743 995987  / 4871 4723 971 937
ll dohs(char *s,int M=999721)
{
    ll int i,pm=937,pp=1,hv=0;
    for(i=0;s[i];i++){
        pp=(pp*pm)%M;
        pr[i+1]=pp;
        hv+=s[i]*pp;
        hv%=M;
        hst[i]=hv;
    }
    return hv;
}
ll revdohs(char *s,int M=999721)
{
    ll int i,pm=937,pp=1,hv=0;
    for(i=strlen(s)-1;i>=0;i--){
        pp=(pp*pm)%M;
        hv+=s[i]*pp;
        hv%=M;
        rhst[i]=hv;
    }
    return hv;
}
#define MD 999721
pii extnuc(ll a,ll b)
{
    if(b==0)return pii(1,0);
    pii d=extnuc(b,a%b);
    return pii(d.second,d.first-d.second*(a/b));
}

ll modi(ll n)
{
    pii d=extnuc(n,MD);
    return ((d.first%MD)+MD)%MD;
}
int main()
{
    ll i,j,a,b,ts,f=1,cn=0,n,sf,sr;
    char s[1000];
    freopen("test.txt","r",stdin);
    scanf("%s",s);
    ln=strlen(s);
    dohs(s);
    revdohs(s);
    pr[0]=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld %lld ",&a,&b);
        sf=hst[b]+MD;
        if(a)sf-=hst[a-1];
        sr=rhst[a]-rhst[b+1]+MD;
        sf*=modi(pr[a]);
        sr*=modi(pr[ln-b-1]);
        sf%=MD;
        sr%=MD;
        if(sf==sr)puts("PD");
        else puts("N PD");
    }
    return 0;
}

