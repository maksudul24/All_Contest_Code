#include <stdio.h>
int main ()
{
    int a,b,c,count1=0,count2=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        scanf("%d",&c);
        if(c>=0){
        count1++;
        }
        else if (c<0) {
        count2++;
        }
    }
    printf("%d %d\n",count1,count2);
    return 0;

}
