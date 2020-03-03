#include<stdio.h>
int main()
{
    int n,x,min,i;
    scanf("%d",&n);
    int ara[21];
    scanf("%d",&ara[0]);
    for(i=1;i<n;i++){
        scanf("%d",&ara[i]);
        x=ara[i]-ara[i-1];
        if(x<0){
            x=x*(-1);
        }
        if(i==1){
            min=x;
        }
        if(x<min){
            min=x;
        }
    }
    printf("%d\n",min);
    return 0;
}
