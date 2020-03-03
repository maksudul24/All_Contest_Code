#include<stdio.h>
int main()
{
    char ara[10][100];
    int i;
    for(i=0;i<10;i++){
        scanf("%s",ara[i]);
    }
    for(i=0;i<10;i++){
        printf("%s\n",ara[i]);
    }
}
