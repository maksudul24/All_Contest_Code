#include<stdio.h>
int main()
{
    int x,y;
    printf("line test string_scanf\n");
    FILE *th;
    char line[20];
    th=fopen("input_txt","r");
    fgets(line,20,th);
    sscanf(line,"%d %d",&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
