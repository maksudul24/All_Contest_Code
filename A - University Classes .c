#include<stdio.h>
#include<string.h>
int main(){
    int ara[7],n,i,j,max=0;
    char line[8];
    scanf("%d",&n);
    memset(ara,0,sizeof(ara));
    for(i=0;i<n;i++){
        scanf(" %s",line);
        for(j=0;j<7;j++){
            if(line[j]=='1'){
                ara[j]++;
                if(ara[j]>max){
                    max=ara[j];
                }
            }
        }

    }
    printf("%d\n",max);
    return 0;
}
