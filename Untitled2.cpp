#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void)
{
    ll tes,cn=0,left,a,b,c,d,n,k,tr,con,ans;
    bool num[100005];
    scanf("%lld",&tes);
    while(tes--){
        scanf("%lld %lld",&n,&k);
        if(n==1){
            printf("Case %lld: 1\n",++cn);
            goto L;
        }
        left=n;
        con=0;
        memset(num,0,sizeof num);
        tr=k;
        for(ll i=1;i<=n+1;i++){
            if(i==n+1){
                i=0;
                continue;
            }
            if(tr>=left){
                if(tr%left==0)tr=left;
                else tr=(tr%left);
            }
            if(num[i]==0)tr--;
            if(tr==0){
                tr=k;
                num[i]=1;
                left--;
            }
            //for(int i=1;i<=n;i++){
              //  printf("%d ",num[i]);
            //}
            //printf("\n");
            if(left==1){
                for(ll j=i+1;j<=n;j++){
                    if(num[j]==0){
                        con++;
                        ans=j;
                        break;
                    }
                }
                if(con==0){
                    for(ll j=1;j<=i;j++){
                        if(num[j]==0){
                            ans=j;
                            break;
                        }
                    }
                }
                break;
            }
        }
        printf("Case %lld: %lld\n",++cn,ans);
        L:;
    }
    return 0;
}
