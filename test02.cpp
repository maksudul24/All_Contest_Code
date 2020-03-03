#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,j,n,ts,ans=1,len=0,bf,af,num,temp,temp2=1;
    int ara[1000];
    scanf("%d",&n);
    if(n/10==0) ans=n;
    while(n){
        num=n%10;
        n=n/10;
        ara[len++]=num;
    }
    for(i=len-1;i>0;i--){
        if(ara[i]!=0){
            ans*=ara[i];
        }
        else{
            j=i;
            temp=1;
            while(ara[j+1]==1 && j!=n-1){
                j++;
                temp*=9;
            }
            if(j==n-1){
                ans/=ara[n-1];
                if(ara[n-1]!=1) ans*=(ara[n-1]-1);
            }
            for(;i>=0;i--){
               ans*=9;
            }
            ans*=temp;
        }
        temp2*=9;
    }
    if(ara[n-1]!=1){
        temp2=(ara[n-1]*temp2);
    }
    if(temp2>ans) ans=temp2;
    printf("%d\n",ans);
    return 0;
}

