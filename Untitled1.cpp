#include <bits/stdc++.h>
using namespace std;
#define ll long long

int phi[5000005];
ll sum[5000005];

int main(void)
{
    int tes,cn=0,a,b,c,d;
    ll m,n;

    //freopen("myfile.txt","r",stdin);
    //freopen("out1.txt","w",stdout);

    for(int i=1;i<=5000005;i++){
        phi[i]=i;
    }

    sum[1]=1;

    for(ll i=2;i<=5000005;i++){
        if(!sum[i]){
            for(ll j=i;j<=5000005;j+=i){
                sum[j]=1;
                n=phi[j];
                n=n/i*(i-1);
                phi[j]=n;
            }
        }

        m=phi[i];
        m*=m;
        sum[i]=sum[i-1]+m;
    }

    scanf("%d",&tes);
    while(tes--){
        printf("Case %d: ",++cn);
        scanf("%d %d",&a,&b);
        printf("sum[b]=%lld sum[a-1]=%lld\n",sum[b],sum[a-1]);
        printf("%lld\n",sum[b]-sum[a-1]);
    }
    return 0;
}
