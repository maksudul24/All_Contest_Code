#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,j,n,cas=0,ts;
    char b[]="Bob",a[]="Alice",line[10];
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        getchar();
        scanf("%s",line);
        printf("Case %d: ",++cas);
        if(strcmp(line,b)==0){
            if(n%3==0) printf("%s\n",a);
            else printf("%s\n",b);
        }
        else{
            n--;
            if(n){
                if(n%3==0) printf("%s\n",b);
                else printf("%s\n",a);
            }
            else printf("%s\n",b);

        }
    }
    return 0;
}
