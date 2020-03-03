#include<stdio.h>
int tex(int n)
{
    int x=0;
       n=n-180000;
    if(n> 180000){
        x=300000*0.1;
        n=n-300000;
    }
    if(n>300000){
        x=(400000*0.15)+x;
        n=n-400000;
    }
    if(n>=400000){
        x=(n*0.25)+x;
    }
    return x;


}

int main()
{
    int n,x,m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>180000){
            x=tex(x);
            if(x<2000){
                x=2000;
            }
            printf("%d\n",x);
        }
        else{
            x=0;
            printf("%d\n",x);
        }
    }
    return 0;
}
