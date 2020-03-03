#include<stdio.h>
int ara[500];
int main()
{
    int pos[500],n,limit,x,h=0,i;
    scanf("%d %d",&n,&limit);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(ara[x]==0){
            pos[h++]=i+1;
            ara[x]=1;
        }
    }
    if(h>=limit){
        printf("YES\n");
        for(i=0;i<limit;i++) printf("%d ",pos[i]);
        printf("\n");
    }
    else printf("NO\n");
    return 0;
}
