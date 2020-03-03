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
    int vector<int> ara[SIZE];
   // freopen("in.txt","r",stdin);
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

