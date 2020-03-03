#include<stdio.h>
#include<stdlib.h>
int main()
{

    int parse,parse2,parse3;
    char read[]="1002 -120";
    char *p,*q;
    parse=strtol(read,&p,10);
    parse2=strtol(p,&p,10);
    parse3=strtol(p,&p,10);
    printf("parse=%d,parse2=%d,parse3=%d\n",parse,parse2,parse3);
    return 0;
}
