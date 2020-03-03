#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 262145
using namespace std;

int current=0,siz=262145;
ll int cnt=0;

ll int goal(int ara[],int n)
{
    int i,siz=n/2,x,j;
    if(n==2){
        x=ara[0]-ara[1];
        if(x<0) x=x*(-1);
        cnt+=x;
        return cnt;
    }
    int temp[siz+1];
    for(i=0,j=0;i<n;i++){
        if(i%2==1){
            if(ara[i]>ara[i-1]){
                    temp[j++]=ara[i];
                    cnt+=ara[i]-ara[i-1];
            }
            else{
                    temp[j++]=ara[i-1];
                    cnt+=ara[i-1]-ara[i];
            }
        }
    }
    x=goal(temp,siz);
    return x;

}

int main()
{
    int i,j,n,cas=0,ts,ara[SIZE];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    cout<<goal(ara,n)<<endl;
    return 0;
}
