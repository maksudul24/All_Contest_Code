#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 200100
using namespace std;

int main()
{
    int i,j,n,x,mark[SIZE],temp,ara[SIZE],y;
    bool sw=true;
    memset(mark,0,sizeof(mark));
    scanf("%d",&n);
    x=0,temp=n;
    for(i=0;i<n-1;i++){
        scanf("%d",&ara[i]);
            if(ara[i]==0) sw=false;
            x+=ara[i];
            if(x<temp) temp=x;
    }
    x=ara[0];
    if(temp<0){
        temp=temp*-1;
        temp++;
        ara[0]=temp;
    }
    else ara[0]=1;
    if(ara[0]>n) sw=false;
    mark[ara[0]]++;
    if(sw){
        for(i=1;i<n;i++){
            y=ara[i];
            ara[i]=ara[i-1]+x;
            if(ara[i]>0 && ara[i]<=n){
                mark[ara[i]]++;
            }
            else{
                sw=false;
            }
            if(mark[ara[i]]>1){
                    sw=false;
            }
            if(ara[i]>n){
                sw=false;
            }
            if(!sw) break;
            x=y;
        }

    }
    if(sw){
            for(i=0;i<n;i++){
                printf("%d",ara[i]);
                if(i!=n-1){
                    printf(" ");
                }
                else cout<<endl;
            }
    }
    else printf("-1\n");
    return 0;
}

