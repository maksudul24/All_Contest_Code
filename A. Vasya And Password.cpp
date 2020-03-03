#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 110
using namespace std;

int main()
{
    int i,ts,pos[6],cnt[6],len,sw;
    char ara[SIZE];
  //  freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%s",ara);
        cnt[1]=0,cnt[2]=0,cnt[3]=0,sw=4,pos[1]=-1,pos[2]=-1,pos[3]=-1;
        len=strlen(ara);
        for(i=0;i<len;i++){
            if(ara[i]>='a' && ara[i]<='z'){
                    if(sw!=1){
                            pos[1]=i;
                           if(cnt[sw]>1) pos[sw]=i-1;
                    }
                    sw=1;
                    cnt[sw]++;
            }
            else if(ara[i]>='A' && ara[i]<='Z'){
                    if(sw!=2){
                            pos[2]=i;
                           if(cnt[sw]>1) pos[sw]=i-1;
                    }
                    sw=2;
                    cnt[sw]++;
            }
            else if(ara[i]>='0' && ara[i]<='9'){
                    if(sw!=3){
                        pos[3]=i;
                        if(cnt[sw]>1) pos[sw]=i-1;
                    }
                    sw=3;
                    cnt[sw]++;
            }

        }
        if(cnt[1]==len) pos[1]=len-1;
        else if(cnt[2]==len) pos[2]=len-1;
        else if(cnt[3]==len) pos[3]=len-1;
        if(!cnt[1]){
                if(cnt[2]>cnt[3]){
                        ara[pos[2]]='a';
                        cnt[2]--;
                        pos[2]--;
                }
                else{
                        ara[pos[3]]='a';
                        cnt[3]--;
                        pos[3]--;
                }
            }
            if(!cnt[2]){
                if(cnt[3]>cnt[1]){
                        ara[pos[3]]='A';
                        cnt[3]--;
                        pos[3]--;
                }
                else{
                        ara[pos[1]]='A';
                        cnt[1]--;
                        pos[1]--;
                }
            }
            if(!cnt[3]){
                if(cnt[2]>cnt[1]){
                        ara[pos[2]]='1';
                        cnt[2]--;
                        pos[2]--;
                }
                else{
                        ara[pos[1]]='1';
                        cnt[1]--;
                        pos[1]--;
                }
            }
        printf("%s\n",ara);
    }
    return 0;
}

