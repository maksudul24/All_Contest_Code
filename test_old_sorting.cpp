#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;

using namespace std;
int main()
{
    int cas=0,k,i,n,ara[10000],cnt,cnt2,num,x;
    scanf("%d",&k);
    while(k--)
    {
        cnt=0,cnt2=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=n;i++){
            if(ara[i]!=i){
                x=p_find(i);
                if(x<min_v) min_v=x;
            }
        }
        //cout<<cnt2<<endl;
        if(cnt2>1) cnt+=cnt2-1;
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}

