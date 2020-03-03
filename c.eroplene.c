#include<stdio.h>
int main()
{
    int n,x;
    while(1){
            scanf("%d",&n);
            if(n==0){
                break;
            }
            if(n<=100){
                x=91;
                printf("f91(%d) = %d\n",n,x);
            }
            if(n>=101){
                x=n-10;
                printf("f91(%d) = %d\n",n,x);
            }
    }
    return 0;
}
