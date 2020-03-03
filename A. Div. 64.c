#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,count=0,sw=0;
    char ara[105];
    scanf("%s",&ara);
    len=strlen(ara);
    if(len>=7){
        for(i=0;i<len;i++){
            if(ara[i]=='0' && sw==1){
                count++;
            }
            else if(ara[i]=='1'){
                sw=1;
            }
        }
        if(count>=6){
            printf("yes\n");
        }

        else{
            printf("no\n");
        }
    }
    else{
        printf("no\n");
    }
    return 0;
}
