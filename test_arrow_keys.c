#include<stdio.h>
int main()
{

    switch(getch()){
        case 65:
            printf("UP pressed\n");
            break;
        case 66:
            printf("Down pressed\n");
            break;
        case 67:
            printf("Rigth pressed\n");
            break;
        case 68:
            printf("Left key pressed\n");
            break;
        case '\n':
            printf("Enter key pressed\n");
            break;
    }
    return 0;
}
