#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 500020
using namespace std;

int main()
{
    int i,j,n,cas=0,ts,max_v=-1,cnt=0,temp,sw=0;
    bool sw2=false;
    char ara[SIZE];
    scanf("%s",ara);
    n=strlen(ara);
    for(i=0;i<n;i++){
        if(sw==2){
            if(ara[i]=='|') cnt++;
            else if(ara[i]==':'){
                sw2=true;
                temp=cnt;
            }
            if(sw2){
                if(ara[i]==']'){
                    if(temp>max_v) max_v=temp;
                    sw2=false;
                }
            }
        }
        else{
            if(ara[i]=='[') sw=1;
            else if(sw==1){ if(ara[i]==':') sw=2; }
        }
    }
    if(max_v>=0) printf("%d\n",4+max_v);
    else printf("-1");
    return 0;
}
