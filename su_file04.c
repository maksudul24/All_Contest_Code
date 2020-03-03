#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp_in,*fp_out;
    int ch;

    fp_in=fopen("image1.jpg","rb");
    if(fp_in==NULL){
        perror("File not found");
        return EXIT_FAILURE;
    }
    fp_out=fopen("image2.jpg","wb");
    while(1){
        ch=fgetc(fp_in);
        if(ch==EOF){
            break;
        }
        ch=fputc(ch,fp_out);

    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
