#include<stdio.h>
int main(){
    int num,a=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        a=num/2;
        printf("%d %d\n",a,num-a);
    }
    return 0;
}
