#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 110
using namespace std;

int main()
{
    int i,j,n,m,h,x;
    int ara_m[SIZE],ara_n[SIZE];
    scanf("%d %d %d",&n,&m,&h);
    for(i=0;i<m;i++){
        scanf("%d",&ara_m[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&ara_n[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&x);
            if(x==1){
                if(ara_n[i]<ara_m[j]) printf("%d",ara_n[i]);
                else printf("%d",ara_m[j]);
            }
            else{
                printf("0");
            }
            if(j!=m-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}

