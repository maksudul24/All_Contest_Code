#include<stdio.h>
#include<string.h>
int main()
{
    int n,cheq,cnt=0,i,j;
    char ara[1002];
    gets(ara);
    n=strlen(ara);
    scanf("%d",&cheq);
    if(cheq>n){
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
    cheq=cheq-cnt;
    if(cheq<0){
        cheq=0;
    }
    printf("%d\n",cheq);
    return 0;
}
