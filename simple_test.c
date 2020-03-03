#include<stdio.h>
int main()
{
    int n=0,ara[100],i;
line:    scanf("%d",&ara[n]);
    if(ara[n]!=0){
        n++;
        goto line;
    }
    else{
        for(i=0;i<n;i++){
        printf("number %d\n",ara[i]);
        }
    }
    return 0;
}
