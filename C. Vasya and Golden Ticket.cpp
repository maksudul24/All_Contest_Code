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
    int i,j,n,ts,cas,cas2,x,y,k,testcas=0;
    bool sw=false,sec;
    char ara[150];
    //freopen("in.txt","r",stdin);
    scanf("%d",&n);
    scanf("%s",ara);
    for(i=0;i<n-1 && sw==false;i++){
        for(j=0;j<n && sw==false;j++){
                  sw=true;
                  cas=i;
                  cas2=j;
                  x=ara[j]-'0';
                  printf("Check:%c",ara[j]);
                  if(i+j>=n) {
                    sw=false;
                    continue;
                    cout<<endl;
                  }
                  while(cas--){
                    printf("%c",ara[cas2]);
                    cas2++;
                    x+=(ara[cas2]-'0');
                  }
                    y=0;
                    cout<<endl;
                   cout<<"Checking:\n";
                   if(x>0){
                    for(k=0;k<n;k++){
                            if(ara[k]!='0'){
                                if(k>=j && k<=j+i){ y=0; continue; }
                                else if(y>x){
                                    sw=false;
                                    break;
                                }
                                else if(y==x){
                                    y=0;
                                    y=ara[k]-'0';

                                }
                                else if(k>j) y+=(ara[k]-'0');
                                if(sw) printf("%c",ara[k]);
                            }
                    }
                    cout<<endl;
                    printf("%d:%d\n",y,x);
                    if(y!=x) sw=false;
                   }
                   else{
                        for(k=0;k<n;k++) if(ara[k]!='0') sw=false;
                   }
        }
    }
    if(sw==true) printf("YES\n");
    else printf("NO\n");
    return 0;
}
