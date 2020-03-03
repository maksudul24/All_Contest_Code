#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sw=0,n;
    scanf("%d",&n);
    char ara[101][101];
    for(i=0;i<n;i++){
        scanf(" %s",ara[i]);
        for(j=0;j<i;j++){
            if(strcmp(ara[i],ara[j])==0){
                sw=1;
                break;
            }
        }
        if(sw==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        sw=0;

    }
    return 0;
}
