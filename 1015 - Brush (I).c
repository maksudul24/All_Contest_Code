#include<stdio.h>
int main()
{
    int i=0,n,st,ans=0,x;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&st);
        while(st--){
            scanf("%d",&x);
            if(x>0){
                ans+=x;
            }
        }
        printf("Case %d: %d\n",++i,ans);
        ans=0;
    }
}
