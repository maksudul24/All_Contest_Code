#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 20010
using namespace std;

int main()
{
    int i,j,n,cas=0,ts,m,p,ans_t,ans_m,len,index;
    int mark[SIZE],total[SIZE];
    double ans,max_v,rat[SIZE];
   // freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        ans_m=0,ans_t=0;
        scanf("%d %d",&m,&p);
        for(i=0;i<m;i++){
            scanf("%d %d",&mark[i],&total[i]);
            rat[i]=(1.0*mark[i])/(1.0*total[i]);
        }
        len=m-p;
        for(i=0;i<len;i++){
                max_v=rat[i];
            for(j=0;j<m;j++){
                if(rat[j]>max_v){
                    max_v=rat[j];
                    index=j;
                }
            }
            rat[index]=0;
            ans_m+=mark[index],ans_t+=total[index];
        }
        ans=((ans_m*1.0)/(1.0*ans_t))*100.00;

        printf("Case %d: %0.6lf\n",++cas,ans);
    }
    return 0;
}
