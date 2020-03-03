#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,sw=1;
    char name[1000];
    gets(name);
    len=strlen(name);
    for(i=0;i<len;i++){
     if(name[i]=='H' || name[i]=='Q' || name[i]=='9'|| name[i]=='+'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
