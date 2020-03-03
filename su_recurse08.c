#include<stdio.h>

int count1=0;
int recurse(int n)
{
    static int count=0;
    if(n==0){
        return 1;
    }
    count++;
    count1++;
    if(n==1){
        printf("count:%d\n",count);
    }
    return n*recurse(n-1);
}

int main()
{
    int x;
    scanf("%d",&x);
    if(x<0){
        printf("Undefined\n");
        return 0;
    }
   x=recurse(x);
    printf("Factorial:%d,count:%d\n",x,count1);
    return 0;
}
