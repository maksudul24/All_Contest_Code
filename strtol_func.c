#include<stdio.h>
int main()
{
    int  x=0;
    char *a,*b;

    char line[]="1 2 3 4 5 6 7 8 9 10";
    for(a=line;;a=b){
        x=strtol(a,&b,10)+x;
        if(a==b){
            break;
        }
    }
    printf("%d\n",x);
    return 0;
}


