#include<stdio.h>
#include<math.h>
#define SIZE 4294967296
int ara[100];

int main()
{
    int n=65536,i,ans,temp;
    double x=log10(SIZE);
    for(i=2;i<=n;i++) ans+=x/(1.0*log10(i*1.0));
    printf("%d\n",ans);
    return 0;
}
