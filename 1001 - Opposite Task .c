#include<stdio.h>
int main()
{
    int k,n;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        printf("%d %d\n",n-n/2,n/2);
    }
    return 0;
}
