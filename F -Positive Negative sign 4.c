#include<stdio.h>
int main()
{
    int n,m,i,x,y,cnt,d,sw,j,k;
    scanf("%d",&k);
    for(j=1;j<=k;j++){
            x=0,y=0,cnt=0,sw=1,d=1;
            scanf("%d %d",&n,&m);
            for(i=0;i<n;i++){
                if(sw==1){
                    d++;
                    x+=d;
                    cnt++;
                    if(cnt==m){
                        sw=0;
                        cnt=0;
                    }
                }
                else{
                    d++;
                    y+=d;
                    cnt++;
                    if(cnt==m){
                        sw=1;
                        cnt=0;
                    }
                }
            }
            x=y-x;
            printf("Case %d: %d\n",j,x);
    }
    return 0;
}
