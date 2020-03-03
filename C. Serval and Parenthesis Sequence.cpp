#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 300100
using namespace std;

int main()
{
    int i,j,n,left=0;
    char ara[SIZE];
    scanf("%d",&n);
    scanf("%s",ara);
    bool sw=true;
    if(n%2!=0) sw=false;
    if(ara[n-1]=='(' || ara[0]==')') sw=false;
    ara[0]='(';
    ara[n-1]=')';
    for(i=1;i<n-1 && sw;i++){
        if(ara[i]=='('){
            left++;
        }
        else if(ara[i]==')'){
            left--;
        }
        else{
            if(left>0){
                ara[i]=')';
                left--;
            }
            else{
                ara[i]='(';
                left++;
            }
        }
        if(left<0 || left>n){
            sw=false;
            break;
        }
    }
    if(sw and left==0) printf("%s\n",ara);
    else  printf(":(\n");
    return 0;
}

