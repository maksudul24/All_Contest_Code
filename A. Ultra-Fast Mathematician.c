#include<stdio.h>
#include<string.h>
int main()
{

    int n,i;
    char ara1[101],ara2[101],ans1[101],ans2[101];
    scanf("%s",ara1);
    n=strlen(ara1);
    scanf("%s",ara2);
    for(i=0;i<n;i++){
     if(ara1[i]=='1' && ara2[i]=='1'){
        ara1[i]='0';
     }
     else if(ara1[i]=='0' && ara2[i]=='0'){
        ara1[i]='0';
     }
     else{
        ara1[i]='1';
     }
    }
    ara1[n]='\0';
    printf("%s\n",ara1);
    return 0;
}
