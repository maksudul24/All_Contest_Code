#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==1){
            x=5;
        }
        else if(x==2){
            x=6;
        }
        else if(x==3){
            x=2;
        }
        else{
            x=0;
        }
        printf("%d\n",x);
    }
    return 0;
}
