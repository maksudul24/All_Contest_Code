#include<stdio.h>

void call()
{
    int static n=1;
    if(n==10) {
            return;
    }
    printf("%d",n);
    n++;
    call();
    n--;
    printf("%d",n);
}

int main()
{
    call();
    return 0;
}
