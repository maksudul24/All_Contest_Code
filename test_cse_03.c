#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++){
        printf("Before Cont:%d ",i);
        if(i%2==0){
            continue;
        }
        printf("After Cont:%d\n",i);
    }
    return 0;
}
