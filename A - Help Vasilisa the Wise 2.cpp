#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 50
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

int main()
{
    int i,j,h,k,r1,r2,c1,c2,d1,d2;
    bool sw=false;
    FI;
    scanf("%d %d %d %d %d %d",&r1,&r2,&c1,&c2,&d1,&d2);
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            if(j!=i){
                for(h=1;h<10;h++){
                    if(h!=i && h!=j){
                        for(k=1;k<10;k++){
                            if(k!=i && k!=j && k!=h){
                                if(i+j==r1 && h+k==r2 && i+h==c1 && j+k==c2 && i+k==d1 && j+h==d2){
                                    sw=true;
                                    printf("%d %d\n%d %d\n",i,j,h,k);
                                    break;
                                }
                            }
                            if(sw) break;
                        }
                    }
                    if(sw) break;
                }
            }
            if(sw) break;
        }
        if(sw) break;
    }
    if(!sw) printf("-1\n");

    return 0;
}
