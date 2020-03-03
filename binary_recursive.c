#include<stdio.h>

char num[80];

void binary(int n)
{
   int x=0;
   if(n<0){
    return;
   }
   return binary(n/2);
   if(n%2==0){
    num[x]='1';
   }
   else{
    num[x]='0';
   }
   x++;
}

int main()
{
    binary(4);
    printf("%s\n",num);
    return 0;
}

