#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int prime[1000000],nprime,data[1000100],temp_prime[10000],h,value[1001100];
char mark[1010000];
void sieve(int);
void group(int);
ll int degroup(ll int);
ll int big(ll int a,ll int b);
int main()
{
    int i,j,n,cas=0,ts,x,y,temp,b,a;
    ll int L,num,z;
   // freopen("in.txt","r",stdin);
    sieve(1000080);
    scanf("%d",&ts);
    while(ts--){
        temp=0,num=1,h=0;
        scanf("%d %d %lld",&a,&b,&L);
        group(a);
        group(b);
       //2 cout<<"Yes\n";
        z=degroup(L);
        sort(temp_prime,temp_prime+h);
        for(i=0;i<h;i++){
          //  cout<<value[temp_prime[i]];
            if(temp!=temp_prime[i]){
               //     cout<<"*";
                    num*=value[temp_prime[i]];
            }
          //  cout<<endl;
            temp=temp_prime[i];
        }
      // cout<<"Num:"<<num<<" Z:"<<z<<endl;
        if(z!=-1 && L%num==0) printf("Case %d: %lld\n",++cas,num*z);
        else printf("Case %d: impossible\n",++cas);
        memset(data,0,sizeof(data));
        memset(value,0,sizeof(value));
    }
    return 0;
}
void group(int n)
{
    int limit=sqrt(n),cnt=0,i;
    for(i=0;prime[i]<=limit;i++){
            cnt=0;
        while(n%prime[i]==0){
            n=n/prime[i];
            cnt++;
            if(!value[prime[i]])temp_prime[h++]=prime[i];
        }
        if(data[prime[i]]<cnt){
                data[prime[i]]=cnt;
                value[prime[i]]=big(prime[i],cnt);
               // cout<<value[prime[i]]<<endl;
        }
        if(n==1) break;
    }
    if(n!=1){
            temp_prime[h++]=n;
            value[n]=n;
    }
    return;
}
ll int degroup(ll int n)
{
    ll int limit=sqrt(n),cnt=0,temp;
    for(int i=0;prime[i]<=limit;i++){
        cnt=0;
        while(n%prime[i]==0){
            cnt++;
            n=n/prime[i];
        }
        temp=big(prime[i],cnt);
        if(temp==value[prime[i]]) value[prime[i]]=1;
        else if(temp<value[prime[i]] && cnt>0) return -1;
        else if(temp>0){
            temp_prime[h++]=prime[i];
            value[prime[i]]=temp;
        }
        if(n==1) break;
    }
    if(n<=1000000 && n!=1){
        if(n==value[n]){
                temp_prime[h++]=n;
                value[n]=1;
                n=1;
        }
    }
    return n;
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
ll int big(ll int a,ll int b)
{
    if(b==0) return 1;
   ll int x=big(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}
