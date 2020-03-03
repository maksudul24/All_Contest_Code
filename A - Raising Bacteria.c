#include<stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    if(x==1){
        printf("%lld\n",x);
    }
    else if(x%2==0){
        x=1;
        printf("%lld\n",x);
    }
    else{
        x=2;
        printf("%lld\n",x);
    }
    return 0;
}
