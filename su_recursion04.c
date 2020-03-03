#include<stdio.h>

void func()
{
    int a=10;
    static int b=10;
    a+=2;
    b+=2;
    printf("a:%d , b: %d\n",a,b);

}

int main()
{
    func();
    func();
    func();
    func();
    return 0;
}
