#include<stdio.h>

int fun(int n)
{
    int x;
    if(n<=100){
        fun(n+11);
    }
    else{
        x=n-10;
    }
    printf("%d\n",x);
}

int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
