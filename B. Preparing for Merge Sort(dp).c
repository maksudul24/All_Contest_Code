#include<stdio.h>
int ara[10000];
int length,lon=0,count=0,max=0;

void fun(int n)
{
    if(ara[n]!=0){
        if(ara[n]>max){
            printf("%d ",);
            max=ara[n];
            ara[n]=0;
    }
    else{
        count++;
    }
    if(count==length){
        return;
    }
    if(lon==length){
            lon=0;
            printf("\n");
            count=0;
            fun(0);
        }
    }
    lon++;
    fun(n+1);

}

int main()
{
    int x,i;
    scanf("%d",&x);
    length=x;
    for(i=0;i<x;i++){
            scanf("%d",&ara[i]);
    }
    fun(0);
    return 0;
}
