#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int prime[10010],nprime;
char mark[100100];
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
int main()
{
    long long int i,n,limit;
    bool sw=false;
    //freopen("in.txt","r",stdin);
    sieve(100020);
    cin>>n;
    limit=sqrt(n)+2;
    for(i=0;prime[i]<=limit;i++){
        if(n%prime[i]==0){
                sw=true;
                break;
        }
    }
    if(sw==true){
        n=n-prime[i];
        n=(n/2)+1;
    }
    else n=1;
    cout<<n<<endl;
    return 0;
}
