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
    int i,j,n,cas=0,ts,vote[100],pos,max_vote,k,temp;
   // freopen("in.txt","r",stdin);
    char party[110][110],candi[110][110],line[110];
    bool sw;
    scanf("%d",&ts);
    temp=ts-1;
    while(ts--){
        scanf("%d",&n);
        sw=true;
        memset(candi,'\0',sizeof(candi));
        getchar();
        for(i=0;i<n;i++){
            gets(candi[i]);
            gets(party[i]);
            vote[i]=0;
        }
        scanf("%d",&k);
        getchar();
        max_vote=0;
        for(i=0;i<k;i++){
            memset(line,'\0',sizeof(line));
            gets(line);
            for(j=0;j<n;j++){
                if(strcmp(line,candi[j])==0) vote[j]++;
                if(vote[j]>max_vote){
                    max_vote=vote[j];
                    pos=j;
                }
            }
        }
        for(i=0;i<n;i++){
            if(i!=pos){
                  //  printf("%d ",vote[i]);
                if(max_vote==vote[i]){
                        sw=false;
                        break;
                }
            }
        }
        if(sw) printf("%s\n",party[pos]);
        else printf("tie\n");
        cout<<endl;
    }
    return 0;
}

