#include<stdio.h>
int main()
{
    long long int n,i,a,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a);
        sum+=a;
    }
    printf("%lld\n",sum);
    return 0;
}
