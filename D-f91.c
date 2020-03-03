#include<stdio.h>
int fun2(int n){
    int x;
    x=n-10;
    return x;
}
int main()
{
    int n,x;
    while(1){
            scanf("%d",&n);
            if(n==0){
                break;
            }
            else if(n>=101){
                x=fun2(n);
            }
            else{
                x=n;
            }
            printf("f91(%d) = %d\n",n,x);
    }
    return 0;
}
