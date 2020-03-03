#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int prime[1000000],nprime,hook[1000000],h,sw;
int value[1000000];
char mark[1001000];
void sieve(int);
void LCM(int n);
ll int big(ll int,ll int);
int main()
{
    int i,j,n,cas=0,ts,a,b,cnt,temp,limit;
    ll int L,x,m,num,check;
  //  freopen("in.txt","r",stdin);
    sieve(1000100);
    scanf("%d",&ts);
    while(ts--){
            h=0,num=1,temp=0,sw=1;
        scanf("%d %d",&a,&b);
        scanf("%lld",&L);
        LCM(a);
        LCM(b);
        limit=sqrt(L);
        m=L;
        temp=0,check=1;
        sort(hook,hook+h);
        for(i=0;i<h;i++){
            if(temp!=value[hook[i]]) check*=value[hook[i]];
            temp=value[hook[i]];
        }
        for(i=0;prime[i]<=limit;i++){
            cnt=0;
            while(m%prime[i]==0){
                cnt++;
                m=m/prime[i];
            }
            if(cnt) temp=big(prime[i],cnt);
            else temp=0;
            if(temp==value[prime[i]] && temp!=0) value[prime[i]]=1;
            else if(temp<value[prime[i]] && cnt>0){
                   sw=0;
                   break;
            }
            else if(temp>value[prime[i]]){
                    if(!value[prime[i]]) hook[h++]=prime[i];
                    value[prime[i]]=temp;
            }
        }
        if(m<=1000000){
            if(value[m]==m){
                    value[m]=1;
                    m=1;
            }
        }
        sort(hook,hook+h);
        temp=0,num=1;
        for(i=0;i<h;i++){
            if(temp!=value[hook[i]]) num*=value[hook[i]];
            temp=value[hook[i]];
        }
  //      cout<<"L:"<<L<<" check:"<<check<<" M :"<<m<<" Num:"<<num<<endl;
        if(L%check==0 && sw) printf("Case %d: %lld\n",++cas,m*num);
        else printf("Case %d: impossible\n",++cas);
        memset(value,0,sizeof(value));
    }
    return 0;
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    prime[nprime++]=2;
    for(i=3;i<=n;i+=2){
        if(mark[i]!='1'){
            prime[nprime++]=i;
            if(i<=limit){
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]='1';
                }
            }
        }
    }
    return;
}
void LCM(int n)
{
    int limit=sqrt(n),i,temp,cnt;
    for(i=0;prime[i]<=limit;i++){
            cnt=0;
        while(n%prime[i]==0){
            cnt++;
            n=n/prime[i];
        }
        if(cnt){
            temp=big(prime[i],cnt);
            if(!value[prime[i]]) hook[h++]=prime[i];
            if(temp>value[prime[i]]) value[prime[i]]=temp;
        }
        if(n==1) break;
    }
    if(n!=1){
      if(value[n]<n){
            value[n]=n;
            hook[h++]=n;
      }
    }
    return;
}
ll int big(ll int a,ll int b)
{
    if(b==0) return 1;
    ll int x=big(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}
