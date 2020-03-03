#include<stdio.h>
int main()
{
    int n,level,x,count=0,i,count2=0;
    scanf("%d",&n);
    scanf("%d",&level);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>=level){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
