#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
using namespace std;
int main()
{
    int cas=0,k,ans,n,i,cnt;
    double db;
    scanf("%d",&k);
    while(k--)
    {
        cnt=0;
        scanf("%d",&n);
        for(i=2;i<=n/2;i++){
            db=(n/(i*1.0))-((i-1)/(2*1.0));
            ans=db;
          //  printf("%d %lf devider:%d",ans,db,i);
            if(db==ans && db>0){
           //     printf(" *\n");
                cnt++;
            }
          //  else printf("\n");
            if(db<0) break;
        }
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}

