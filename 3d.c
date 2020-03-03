#include<stdio.h>
int main(){
    int t,i,a,b;
    scanf("%d",&t);
    if(t<15){
        char ara[t];
        char b[]={'>','<','=','\0'};
        for(i=0;i<t;i++){
            scanf("%d",&a);
            scanf("%d",&b);
            if(a==b){
                ara[i]=b[2];
            }
            if(a>b){
                ara[i]=b[0];
            }
            else{
                ara[i]=b[1];
            }
        }
        for(i=0;i<t;i++){
            printf("%c\n",ara[i]);
        }
    }
    return 0;
}
