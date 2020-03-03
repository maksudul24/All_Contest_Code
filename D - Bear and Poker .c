#include<stdio.h>
int main()
{
    int n,i=0,max=0,count=0;
    double x,y;
    scanf("%d",&n);
    int ara[n+100];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>max){
            max=ara[i];
        }
    }
    x=max;
    for(i=0;i<n;i++){
         y=ara[i];
         if(x/y==2.0 || x/y==3.0 || x/y==1.0){
            count++;
         }
    }
    if(count==n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
