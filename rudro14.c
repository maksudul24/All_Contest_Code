#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d",&a);
    if(a<=0){
        printf("a can not be determined\n");
    }
    else{
        for(b=1,c=0;b<a;b++){
            c=b+c;
        }
        printf("%d\n",c);
    }
    return 0;
}
