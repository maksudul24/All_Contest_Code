#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("a is Negative\n");
    }
    else if(a>0){
        printf("a is Positive ");
    }
    else if(a=0){
        printf("a is Zero");
    }
    return 0;
}
