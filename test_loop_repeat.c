#include<stdio.h>
int main()
{
    int x,y,num=0,len,i=0;
    char s[20];
    scanf("%s",s);
    len=strlen(s);
    while(i<len){
                y=s[i]-48;
                printf("num:%d,y:%d,real:%d\n",num,y,num*10+y);
                num=num*10+y;
                printf("normal:%d\n",num);
                i++;
    }
    printf("Final Answer:%d\n",num);
    return 0;
}
