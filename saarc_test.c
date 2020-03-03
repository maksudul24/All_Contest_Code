#include<stdio.h>
int main()
{
    int sw=0,i;
    for(;;){
    printf("Switch:");
    scanf(" %d",&sw);
    if(sw==1){
        break;
    }
    char con[7][100];
    for(i=0;i<2;i++){
        gets(con[i]);
    }
    for(i=0;i<2;i++){
        printf("%s\n",con[i]);
    }
    }
    return 0;
}
