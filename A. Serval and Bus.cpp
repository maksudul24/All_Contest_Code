
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,n,t,min_v=100000000,temp,x,y,pos;
    scanf("%d %d",&n,&t);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x>=t){
            if(x<min_v){
                    min_v=x;
                    pos=i+1;
            }
        }
        else{
            temp=t-x;
            if(temp%y==0){
                temp=temp/y;
            }
            else{
                temp=temp/y;
                temp++;
            }
            temp=(temp*y)+x;
            if(temp<min_v){
                    min_v=temp;
                    pos=i+1;
            }
        }
    }
    printf("%d\n",pos);

    return 0;
}
