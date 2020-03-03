#include<stdio.h>
int main()
{
    long long int a,max=0,min=0,add=0,i,j;
    int ara[5];
    for(i=0;i<5;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j!=i){
                add+=ara[j];
            }
        }
        if(i!=0){
            if(add>max){
               max=add;
            }
            if(add<min){
                min=add;
            }
        }
        else{
         max=add;
         min=add;
        }
        add=0;
    }

    printf("%lld %lld\n",min,max);
    return 0;
}
