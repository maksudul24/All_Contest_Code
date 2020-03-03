#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double ans=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        ans+=log10(i);
    }
    printf("%lld\n",ans);
    return 0;
}
