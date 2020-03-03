#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;
int prime[10000],nprime,value[11000],p_num[50000],p_i;
char mark[200000],num[500000];
void sieve(int);
void group(int);
int big(int a,int b);
int multiple(int,int);
int main()
{
    int i,j,cas=0,ts,x,n,temp,h,sw,ans;
 //   freopen("in.txt","r",stdin);
    sieve(10010);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        h=0,sw=1,p_i=0;
        for(i=0;i<n;i++){
            scanf("%d",&x);
            group(x);
        }
        x=0;
        for(i=0;i<p_i;i++){
            if(sw){
                temp=value[p_num[i]];
                while(temp){
                    num[h++]=(temp%10+48);
                    temp/=10;
                }
                x=h;
                sw=0;
            }
           else x=multiple(value[p_num[i]],x);
        }
        cout<<"Case "<<++cas<<": ";
        if(x>0){
            for(i=x-1;i>=0;i--) printf("%c",num[i]);
            cout<<endl;
        }
        else cout<<1<<endl;
        memset(value,0,sizeof(value));
    }
    return 0;
}
int multiple(int b,int length) {
    ll int carry = 0;
    int i;
    for(i = 0; i < length; i++ ) {
        carry += (num[i] - 48) * b;
        num[i] = ( carry % 10 + 48 );
        carry /= 10;
    }
    while( carry ) {
        num[i++] = ( carry % 10 + 48 );
        carry /= 10;
    }
    return i;
}
void group(int n)
{
    int limit=sqrt(n),cnt=0,temp;
    for(int i=0;prime[i]<=limit;i++){
            cnt=0;
        while(n%prime[i]==0){
            n=n/prime[i];
            cnt++;
        }
        if(cnt){
            temp=big(prime[i],cnt);
            if(!value[prime[i]]) p_num[p_i++]=prime[i];
            if(value[prime[i]]<temp) value[prime[i]]=temp;
        }
        if(n==1) break;
    }
    if(n!=1){
            if(!value[n]) p_num[p_i++]=n;
            if(n>value[n]) value[n]=n;
    }
}
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    mark[1]='1';
    prime[nprime++]=2;
    for(i=4;i<=n;i+=2) mark[i]='1';
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
int big(int a,int b)
{
    if(b==0) return 1;
    int x=big(a,b/2);
    x=x*x;
    if(b%2==1) x=x*a;
    return x;
}
