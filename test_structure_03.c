#include<stdio.h>
int main()
{
    union rabat{
        int this;
        char* you;
        double her;

    };
    union rabat tm;
    tm.this=110;
    tm.you="Rana Jahid";
    tm.her=3.1416;
    printf("Roll:%d Name:%s Id:%lf\n",tm.this,tm.you,tm.her);
    return 0;
}
