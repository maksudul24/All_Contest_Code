#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1000010
using namespace std;

char str[SIZE],sub_str[SIZE];
int ara[SIZE];

int root(int n,char ch)
{
    int x;
    bool sw=true;
    if(n==0){
            sw=false;
            return 0;
    }
    if(sub_str[n]==ch){
            sw=false;
            return n;
    }
    if(sub_str[n] != ch && sw==true){
        x=root(ara[n-1],ch);
    }
    return x;
}

void suff_preff(int n)
{
    int i,j=0;
    for(i=1;i<n;i++){
        if(sub_str[i]==sub_str[j]){
            ara[i]=j+1;
            j++;
        }
        else if(j!=0){
                j=root(ara[j-1],sub_str[i]);
                if(sub_str[j]==sub_str[i]) ara[i]=ara[j]+1;
        }
    }
}

int KMP(int n,int m)
{
    int i,j=0,cnt=0;
    for(i=0;i<n;i++){
       if(str[i]==sub_str[j]) j++;
       else if(j>0){
            j=ara[j-1];
            if(str[i]==sub_str[j]) j++;
       }
       if(j==m){
            j=0;
            cnt++;
       }
    }
    return cnt;
}


int main()
{
    int i,j,n,cas=0,ts;
 //   freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    getchar();
    while(ts--){
        scanf("%s %s",str,sub_str);
        printf("Case %d: %d\n",++cas,KMP(strlen(str),strlen(sub_str)));
    }
    return 0;
}
