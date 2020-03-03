#include<stdio.h>
#include<string.h>
int main()
{
    struct myid {
        int roll;
        char* name;
    };
    struct myid i;
    i.roll=10;
    i.name="Rabat";
    printf("ID:%d Name:%s\n",i.roll,i.name);
    return 0;
}
