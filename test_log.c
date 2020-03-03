#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,ans=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        ans+=pow(2,i);
    }
    printf("%d\n",ans);
    return 0;
}
