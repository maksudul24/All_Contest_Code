#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 210
#define uu first
#define vv second
#define pii pair<int,int>
#define dbug(a, args...) printf("Line:%d " a,__LINE__, ##args)
#define SIZE 100100

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,ara[SIZE],num[SIZE],max_v,pos;
    FI;
    scanf("%d",&ts);
    while(ts--){
        max_v=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            if(ara[i]>max_v){
                max_v=ara[i];
                pos=i;
            }
            num[i]=pos;
        }
        pos=0;
        ans=0;
        for(i=0;i<n;i++){
            ans+=ara[i];
            if(ans>m){
                pos=num[i]+1;
                break;
            }

        }


        printf("%d\n",pos);

    }
    return 0;
}

