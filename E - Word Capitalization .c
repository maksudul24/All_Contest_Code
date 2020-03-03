#include<stdio.h>
int main()
{
    char name[1000];
    scanf("%s",name);
    if(name[0]>=97 && name[0]<=122){
        name[0]='A'+(name[0]-'a');
    }
    printf("%s\n",name);
    return 0;
}
