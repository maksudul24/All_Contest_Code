#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,y,n,x,i,max_v,temp,cnt=0,ara[SIZE],cnt_ara[SIZE],cnt_pos[SIZE];
    scanf("%d",&k);
    while(k--)
    {
        cnt=1;
        scanf("%d",&n);
        scanf("%d",&ara[0]);
        max_v=0;
        for(i=1;i<n;i++){
            scanf("%d",&ara[i]);
            x=ara[i]-ara[i-1];
            if(x>max_v){
                max_v=x;
                cnt=0;
            }
            else if(x==max_v){
                    cnt++;
                    pos=i;
            }
        }
        cnt2=0;
        last=pos;
        y=0;
        memset(cnt_ara,0,sizeof(cnt_ara));
        for(i=pos+1;i<n;i++){
            x=ara[last]-ara[i];
            if(x==1){
                cnt2++;
                last=i;
            }
            else if(x==0){
                last=i;
                cnt_ara[y]++;
                cnt_pos[y]=ara[last];
                y++;
            }
            else if(x<0) cnt2+=x+1;
        }
        for(i=0;i<y;i++){
            if(cnt_pos[i]>) cnt2+=cnt_ara[i];
        }
        printf("Case %d: %d\n",++cas,max_v+cnt+cnt2);
    }
    return 0;
}
