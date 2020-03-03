#include<stdio.h>
void recurse()
{
    static int i=0;
    char *s="Hurry : I am learning recursion";
    printf("%s\n",s);
    if(i==10){
        return;
    }
    i++;
    recurse();
}
int main()
{
        recurse();
        return 0;
}
