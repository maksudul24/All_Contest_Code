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
    int i,j,n,k,cnt=0,len,limit;
    char line[10000],ara[10000],line2[10000],ch;
    scanf("%d %d",&n,&k);
    scanf("%s",line);
    strcpy(line2,line);
    len=n/2;
    ch=line[0];
    for(i=0,j=n-1;i<len;i++,j--){
        if(line[i]==line[j] && ch==line[i]){
                line[i]='\0';
                ch=line[i];
                cnt++;
        }
    }
    ch=line[0];
    for(i=0;i<n;i++){
        if(ch==line[i]) cnt++;
        ch=line[i];
    }
    if(n%2==1 && cnt==n) line[n/2]='\0';
    for(i=0,j=0;i<n;i++){
        if(line[i]!='\0'){
            ara[j]=line[i];
            j++;
        }
    }
    limit=j;
    k=(limit*(k-1))+n;
    for(j=0,i=n;i<k;i++){
        line2[i]=ara[j];
        j++;
        if(j==limit) j=0;
    }
    printf("%s\n",line2);

    return 0;
}
