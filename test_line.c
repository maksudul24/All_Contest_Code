#include<stdio.h>
int main()
{
    char *line="january 12,2012",my[20],ch;
    int x,y;
    sscanf(line,"%s %d %c %d",my,&x,&ch,&y);
    printf("%s %d %d\n",my,x,y);
    return 0;

}
