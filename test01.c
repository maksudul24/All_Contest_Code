#include<stdio.h>
int main()
{
    char *rab={"MAKSUDUL HASAN RABAT"};
    printf("%s %s\n",rab,*(&rab));
    return 0;
}
