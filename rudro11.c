#include <stdio.h>
int main ()
{
    int a,i,num1,num2,num3;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1>=1&num1<=100&&num2>=1&num2<=100&&num3>=1&<=100){
            printf("%d %d %d",num1,num2,num3);
        }
    }
    return 0;
}
