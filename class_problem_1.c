#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char line[100],ch;
    gets(line);
    scanf("%c",&ch);
    len=strlen(line);
    for(i=0;i<len;i++){
        if(line[i]==ch){
            printf("%d ",i);
        }
    }
    return 0;
}
