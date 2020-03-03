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
    int i,j,n,cas=0,ts,max_v=0,ans=0,temp;
    char ara[SIZE];
    bool sw=true;
    scanf("%s",ara);
    n=strlen(ara);
            for(i=0;i<n;i++){
                if(ara[i]=='['){
                    if(!ans) ans=1;
                }
                if(ans==1){
                    if(ara[i]==':') ans++;
                }
                else if(ans>1){
                    if(ara[i]=='|') ans++;
                    else if(ara[i]==':'){
                            sw=false;
                            temp=ans;
                    }
                    else if(ara[i]==']' && !sw){
                        sw=true;
                        if(temp+2>max_v) max_v=temp+2;
                    }
                }
            }
    if(max_v>0) printf("%d\n",max_v);
    else printf("-1");
    return 0;
}

