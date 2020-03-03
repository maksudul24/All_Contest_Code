#include<stdio.h>
int main()
{
    int i,x;
    FILE *fp,*fp_out;
    fp=fopen("read.txt","r");
    fp_out=fopen("write.txt","a");
    for(i=0;i<5;i++){
        fscanf(fp,"%d",&x);
       fprintf(fp_out,"%d ",x);
    }

    fclose(fp);
    return 0;
}
