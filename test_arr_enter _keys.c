#include<stdio.h>
#include<conio.h>
int main()
{
    char ch=0,k=0;
    while(1)
    {

        ch=getch();
        if(ch==27){
            k=1;
        }
        if(ch==91 && k==1){
            k=2;

        }
        if(ch==65 && k==2){
            printf("Up pressed\n");
        }
        if(ch==66 && k==2){
            printf("Down key pressed\n");
        }
        if(ch == '\n' && k==2){
            printf("Enter pressed\n");
        }
        if(ch !=27 && ch != 91)
            k=0;
        printf("%c - %d\n",ch,ch);
    }
    return 0;
}
