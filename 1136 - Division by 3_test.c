#include<stdio.h>
int main()
{
    long long int n,i,x,count=0;
    scanf("%lld %lld",&i,&n);
    for(;i<=n;i++){
        x=(i*(i+1))/2;
        printf("N:%d,Status:",i);
        if(x%3==0){
            count++;
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    printf("Count:%d\n",count);
    return 0;
}
