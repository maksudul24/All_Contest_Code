#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char of[10],month[6],*test="week";
    scanf("%d %s %s",&x,of,month);
    if(strcmp(test,month)==0){
        if(x==5 || x==6){
                x=53;
        }
        else{
            x=52;
        }
    }
    else{
        if(x==30){
            x=11;
        }
        else if(x==31){
                x=7;
        }
        else{
            x=12;
        }
    }
    printf("%d\n",x);
    return 0;
}
