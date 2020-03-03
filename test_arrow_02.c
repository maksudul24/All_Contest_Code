#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    ch= getch();
    if(ch==0){
        ch=getch();
        printf("The seconf byte is %d\n",ch);
        }

    return 0;
}
