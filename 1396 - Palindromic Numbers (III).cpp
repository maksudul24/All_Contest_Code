#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 100100
using namespace std;

int main()
{
    int i,j,n,cas=0,ts,len;
    char ara[SIZE];
    bool sw;
    freopen("in.txt","r",stdin);
   FO;
    scanf("%d",&ts);
    getchar();
    while(ts--){
        memset(ara,'\0',sizeof(ara));
        sw=true;
        scanf("%s",ara);
        n=strlen(ara);
        for(i=0,j=n-1;i<n/2;j--,i++){
            if(ara[i]>ara[j]){
                    sw=false;
                    ara[j]=ara[i];
            }
            else if(ara[i]<ara[j]) sw=true;
        }
        if(n%2==0){
            len=(n/2)-1;
            i=len,j=len+1;
        }
        else{
            len=n/2;
            i=len-1;
            j=len+1;
            if(sw){
                if(ara[len]+1<='9'){
                    ara[len]=ara[len]+1;
                    sw=false;
                }
                else if(n>1) ara[len]='0';
                else ara[0]='1',ara[1]='1';
            }
        }
        for(;i>=0;i--,j++){
            if(ara[i]<=ara[j] && sw){
                if(ara[i]+1<='9'){
                        sw=false;
                        ara[i]=ara[i]+1;
                        ara[j]=ara[i];
                }
                else if(i){
                    ara[i]='0';
                    ara[j]='0';
                }
                else{
                    ara[0]='1';
                    if(n>1) ara[n-1]='0';
                    ara[n]='1';
                }
            }
           else{
                sw=false;
                ara[j]=ara[i];
            }
        }
        printf("Case %d: %s\n",++cas,ara);
    }
    return 0;
}

