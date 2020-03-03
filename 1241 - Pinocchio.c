#include<stdio.h>
int main()
{
    int x,cas=0,n,cnt=0,m,i,y=0;
    scanf("%d",&m);
    while(m--){
            y=2,cnt=0;
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d",&x);
                y=x-y;
                if(y){
                    if(y<=5){
                        cnt++;
                    }
                    else{
                        cnt+=y/5;
                        if(y%5!=0) cnt++;
                    }
                }
                y=x;
            }
            printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
