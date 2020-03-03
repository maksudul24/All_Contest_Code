#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    ll int i,j,n,cas=0,ts,v,m,x,test;
    double temp,tax;
   //  freopen("in.txt","r",stdin);
    while(1){
        scanf("%lld %lld",&m,&x);
        if(m==0 && x==0) break;
        if(x>0 && x<100){
            temp=(1.0*x)/100.00;
            tax=temp;
            temp=(1.0*m)/(1-temp);
            v=temp;
            //printf("math:%lf int:%d\n",temp,v);
            test=v;
            while(v>m){
                temp=v-(1.0*v*tax);
                temp=temp-0.000001;
                test=ceil(temp);
                if(test<m) break;
                v--;
            }
            printf("%lld\n",v);
        }
        else printf("Not found\n");
    }
    return 0;
}

