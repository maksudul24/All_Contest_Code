#include<stdio.h>
#include<string.h>
int main()
{

    int ara[2001],ans[2001],chk[2001],ratting=1,ara2[2001];
    int i,j,n,x=-1,now=0,max=-1,pos,cnt;
    scanf("%d",&n);
    memset(chk,0,sizeof(chk));
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        ara2[i]=ara[i];
    }
    for(i=0;i<n;i++){
        if(){
                for(j=0;j<n;j++){
                    if(ara[j]>max){
                        max=ara[j];
                        pos=j;
                        cnt=0;
                    }
                    else if(ara[j]==max){
                        cnt++;
                    }

                }
                x=max;
                max=-1;
                chk[ara[pos]]=ratting;
                for(j=0;j<n;j++){
                    if(ara[j]==x){
                        ara[j]=-1;
                    }
                }
                ratting++;
                ratting+=cnt;
          }

    }
    for(i=0;i<n;i++){
        printf("%d ",chk[ara2[i]]);
    }
    return 0;
}
