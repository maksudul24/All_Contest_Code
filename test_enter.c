#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='\n'){

        printf("Enter Key Pressed\n");
    }
    else if(c==65){
        printf("Up key pressed\n");
    }
    else if(c==66){
        printf("down key pressed\n");
    }
    else if(c==67){
        printf("Right key pressed\n");

    }
    else if(c==68){
        printf("Left key pressed\n");
    }
    else{
        printf("key not pressed\n");
    }
    return 0;
}
