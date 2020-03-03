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
    int i,j,n,len=0,num,temp;
    int ara[1000];
    scanf("%d",&n);
    while(n){
        num=n%10;
        n=n/10;
        ara[len++]=num;
    }
    temp=9;
    i=1;
    if(ara[0]){ num=ara[0]; }
    else{
        if(ara[1]!=1) ara[1]=ara[1]-1;
        else i=2;
        num=9;
    }
    for(;i<len;i++){
        if(ara[i]==0 || ara[i]==1){
            if(i!=len-1){
                num=temp*9;
                if(ara[i+1]>=1) ara[i+1]--;
            }
            else num=temp;
        }
        else{
            if(num*ara[i]>((ara[i]-1)*temp)){
                num=num*ara[i];
            }
            else num=(ara[i]-1)*temp;
        }
        temp*=9;
    }
    printf("%d\n",num);
    return 0;
}

