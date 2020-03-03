#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 10000000
using namespace std;

int ara[SIZE];

ll int goal(int n)
{
    int i,pass,j,x,cas,spce;
    cas=((1.0*log10(n))/(1.0*log10(2)));
    ll int cnt=0;
    cas++;
    i=0;
    pass=2;
    spce=1;
    while(1){
        if(i>=n){
            i=0;
            spce=pass;
            pass*=2;
            cas--;
            if(!cas) break;

        }
        x=ara[i]-ara[i+spce];
        if(x<0){
            ara[i]=ara[i+spce];
            x=x*(-1);
        }
        cnt+=x;
        i+=pass;
    }
    return cnt;

}

int main()
{
    int i,j,n,cas=0,ts;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    cout<<goal(n)<<endl;
    return 0;
}

