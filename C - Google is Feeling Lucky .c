#include<stdio.h>
#include<string.h>
int main()
{
    int value[10],i,j,position,max=0,n,k,m;
    scanf("%d",&n);
    char web[10][100],list[10][100];
    for(k=0;k<n;k++){
            max=0;
            for(i=0;i<10;i++){
                scanf("%s",web[i]);
                scanf("%d",&value[i]);
                for(m=0;m<i;m++){
                    if(strcmp(web[i],web[m])==0){
                        value[i]=value[i]+value[m];
                    }
                }
                 if(value[i]>max){
                    max=value[i];
                }
            }
            for(i=0,j=0;i<10;i++){
                if(value[i]==max){
                    strcpy(list[j],web[i]);
                    j++;
                }
             }
            printf("Case %d#:\n",k+1);
            for(i=0;i<j;i++){
                printf("%s\n",list[i]);
            }
    }
    return 0;
}
