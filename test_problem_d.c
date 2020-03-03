#include<stdio.h>
int main()
{


  int n,money,x;
  scanf("%d",&x);
    n=x/30;
    money=10*n;
    n=x%30;
    if(n>=0){
        money=money+10;
    }
    printf("money:%d\n",money);
    return 0;
}
