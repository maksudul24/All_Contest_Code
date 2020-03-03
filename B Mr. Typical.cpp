#include<stdio.h>
int main()
{
    char ara[20][100],str[1000200];
    int i,len[20],l;
    strcpy(ara[0],"never");
    len[0]=5;
    strcpy(ara[1],"be");
    len[1]=2;
    strcpy(ara[2],"so");
    len[2]=2;
    strcpy(ara[3],"happy");
    len[3]=5;
    strcpy(ara[4],"when");
    len[4]=4;
    strcpy(ara[5],"you");
    len[5]=3;
    strcpy(ara[6],"are");
    len[6]=3;
    strcpy(ara[7],"and");
    len[7]=3;
    strcpy(ara[8],"sad");
    len[8]=3;
    gets(str);
    l=strlen(str);
    for(i=0;i<9;i++){
        if(strcmp(str,ara[i])==0 && len[i]==l){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
