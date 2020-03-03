#include<stdio.h>
int main()
{
    int number[100],i=0,j;
    char name[100][100];
    printf("Enter 0 to exit\n");
    while(1){
            if(name[i-1]=='\0' || number[i-1]==0){
            break;
        }
        printf("Name:\n");
        gets(name[i]);
        printf("number:\n");
        scanf("%d",&number[i]);
        i++;
    }
    printf("students and their number\n");
    for(j=0;j<i;j++){
        printf("Name:%s , Number:%d\n",name[i],number[i]);
    }
    return 0;
}

