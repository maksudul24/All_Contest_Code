#include<stdio.h>
int main()
{
    int i,ara[25];
    FILE *fp;
    fp=fopen("read.txt","r");
    for(i=0;i<25;i++){
        fscanf(fp,"%d",&ara[i]);
    }
    for(i=0;i<25;i++){
        printf("%d ",ara[i]);
        if((i+1)%5==0){
            printf("\n");
        }
    }
    fclose(fp);
    return 0;
}
