#include<stdio.h>
int main()
{

    int n,cas=0,x1,x2,y2,y1,x,y,m,i;
    scanf("%d",&n);
    while(n--){
        printf("Case %d:\n",++cas);
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&m);
        for(i=0;i<m;i++){
            scanf("%d %d",&x,&y);
            if(x>x1 && x<x2 && y>y1 && y<y2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}
