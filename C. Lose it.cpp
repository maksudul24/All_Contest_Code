#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 500010
using namespace std;


int main()
{
    int i,n,x,temp;
    int mark[50],ind[50];
    ind[4]=1,ind[8]=2,ind[15]=3,ind[16]=4,ind[23]=5,ind[42]=6;
   // freopen("in.txt","r",stdin);
    memset(mark,0,sizeof(mark));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==4){
            mark[1]++;
        }
        else{
            temp=ind[x]-1;
            if(mark[temp]>mark[ind[x]]){
                mark[ind[x]]++;
            }

        }
    }
    printf("%d\n",n-(6*mark[6]));
    return 0;
}

