#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 2200
using namespace std;

int main()
{
    long long int i,j,n,cas=0,ts,ara[SIZE],low[SIZE],high[SIZE],num,max_high,max_low;
  //  freopen("in.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        num=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++) scanf("%lld",&ara[i]);
        high[n-1]=0;
        low[n-1]=0;
        for(i=n-2;i>=0;i--){
            max_high=0,max_low=0;
            for(j=i+1;j<n;j++){
                if(ara[i]>ara[j]){
                    if(max_high<high[j]+1) max_high=high[j]+1;;
                }
                else{
                    if(max_low<low[j]+1) max_low=low[j]+1;
                }
            }
            high[i]=max_high;
            low[i]=max_low;
            if(max_high+max_low>num) num=max_high+max_low;
           // printf("num:%d high:%d,low:%d\n",ara[i],max_high,max_low);
        }
        if(n!=0) printf("%lld\n",num+1);
        else printf("0\n");
    }
    return 0;
}

