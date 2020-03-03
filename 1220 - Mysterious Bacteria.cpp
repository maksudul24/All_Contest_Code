#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define limit 4294967296
using namespace std;
int ara[1000000];
double power(int n);
int main()
{
    int i,j,n,cas=0,ts;
    double x;
   // freopen("in.txt","r",stdin);

    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        x=power(n);
    }
    return 0;
}
double power(int n)
{
    double min_v,max_v,mid_v,num=log10(n),temp;
    max_v=2,min_v=4294967296;
    while(max_v-min_v>0.00001){
        mid_v=(max_v+min_v)/2;
        temp=num/log10(mid_v);
        if(mid_v>temp) min_v=mid_v;
        else max_v=mid_v;
    }
    return mid_v;

}
