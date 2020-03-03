#include<stdio.h>

int fun(int n)
{
    int cnt=0;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(3*n)+1;
        }
        cnt++;
    }
    return cnt;
}

int main(){

    int a,b,max=0,j,x,y;

        scanf("%d %d",&y,&b);
        a=y;
        for(j=a;j<=b;j++){
            x=fun(a);
            if(max<x){
                max=x;
            }
            a++;
       }
       printf("%d %d %d\n",y,b,max+1);
       max=0;

    return 0;
}
