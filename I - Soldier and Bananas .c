#include<stdio.h>
int main()
{
    int a,b,c,sum=0,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
        sum=(i*a)+sum;
    }
    sum=sum-b;
    if(sum<0){
        sum=0;
    }
    printf("%d\n",sum);
}
