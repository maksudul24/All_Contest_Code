#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,j=0,y;
    double sum;
    scanf("%d",&i);
    while(i--){
        scanf("%d %d",&x,&y);
        sum=y-x;
        sum=(1.0)*sum/3;
        sum=ceil(sum*2);
        x=sum;
        printf("Case %d: %d\n",++j,x);

    }
    return 0;
}
