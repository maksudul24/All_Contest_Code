#include<stdio.h>
int main(){
    int T,a,b,i;
    scanf("%d",&T);
    int ara[T];
    if(T<=125 ){
        for(i=0;i<T;i++){
            scanf("%d",&a);
            scanf("%d",&b);
            ara[i]=a+b;
        }
        for(i=0;i<T;i++){
            printf("%d\n",ara[i]);
        }
    }
    return 0;
}

