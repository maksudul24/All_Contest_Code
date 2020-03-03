#include<stdio.h>

int main()
{
    int ara[]={0,0,0,0,0,0,0};
    int n,i,j,maximum=1,sw=1;
    char gr1[7],gr2[7];
    scanf("%d",&n);
    scanf("%s",gr1);
    printf("%d\n",n);
    for(i=1;i<n;i++){
            printf("Entering loop\n");
        if(sw==1){
            scanf("%s",gr2);
            sw=0;
        }
        else{
            scanf("%s",gr1);
            sw=1;
        }
        for(j=0;j<7;j++){
            if(gr1[j]=='1' && gr2[j]=='1'){
                ara[j]++;
                if(ara[j]>maximum){
                    maximum=ara[j];
                }
             }
        }
    }
    printf("%d\n",maximum);

    return 0;

}
