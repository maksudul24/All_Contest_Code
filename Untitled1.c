#include<stdio.h>
int main()
{
    int n
    gets(s);
    n=strlen(s);
    scanf("%d",cheq);
    if(cheq>n || cheq>26){
        printf("impossible\n");
        return 0;
    }
    for(i=0;i<n;i++){
        if(ara[i]!=0){
            cnt++;
        }
        for(j=0;j<n;j++){
            if(i!=j){
                if(ara[i]==ara[j]){
                    ara[j]=0;
                }
            }
        }
        ara[i]=0;
    }
