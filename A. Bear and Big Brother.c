#include<stdio.h>
int main()
{
    int a,b,n=0;
    scanf("%d %d",&a,&b);
    while(1){
        n++;
        a=a*3;
        b=b*2;
        if(a>b){
            break;
        }
    }
    printf("%d\n",n);
    return 0;
}
