#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 1000
#define uu first
#define vv second
#define pii pair<int,int>
#define dbg(a, args...) printf("Line:%d " a,__LINE__, ##args)

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,mark[SIZE],mark2[SIZE],cnt1,cnt2,alrt;
    int notic[SIZE];
    char ara1[SIZE],ara2[SIZE],seq[SIZE];
    bool sw;
    scanf("%d",&n);
    while(n--){

        sw=true;
        cnt1=0,cnt2=0,alrt=0;
        memset(mark,0,sizeof(mark));
        memset(mark2,0,sizeof(mark2));
        memset(notic,0,sizeof(notic));

        scanf(" %s %s",ara1,ara2);
        for(i=0;i<strlen(ara1);i++){
            mark[ara1[i]]++;
            if(notic[ara1[i]]==0){
                notic[ara1[i]]=1;
                cnt1++;
            }
        }
        i=strlen(ara1);
        ara1[i]='2';
        for(i=0,j=0;i<strlen(ara2);i++){
            mark2[ara2[i]]++;
            if(notic[ara2[i]]==1 && ara2[i]!=ara1[j]){
                sw=false;
            }
            if(mark2[ara2[i]]>=mark[ara2[i]]){
                if(notic[ara2[i]]==1){
                    cnt2++;
                    notic[ara2[i]]=2;
                }
            }
            if(ara2[i]==ara1[j]){
                j++;
            }
        }
        if(cnt1==cnt2){
            if(j>=cnt1){
                if(sw==false) printf("YES\n");
                else printf("NO\n");
            }
            else printf("YES\n");

        }
        else printf("NO\n");
    }
    return 0;
}

