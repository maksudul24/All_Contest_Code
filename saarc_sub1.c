#include<stdio.h>
#include<string.h>
int main()
{
    int row,col,name_length;
    char saarc[7][100]={"Bangladesh","India","Pakistan","Sri Lnaka","Nepal","Bhutan","Maldives"};
    for(row=0;row<7;row++){
        name_length=strlen(saarc[row]);
        for(col=0;col<name_length;col++){
            printf("(%d,%d) = %c,",row,col,saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
