#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>-1){
    a=2*a*b;
   if(a<0){
      a=(-1)*a;
   }
    printf("%d\n",a);
    }
    return 0;
}
