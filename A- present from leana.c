#include<stdio.h>
int main()
{
    int n,len,pos_l,hf,i,j,spc;
    scanf("%d",&n);
    len=2*n+1;
    hf=n;
    spc=2*n;
    pos_l=n-1;
    for(i=0;i<len;i++){
        if(i<=hf){
           for(j=0;j<spc;j++){
                printf(" ");
           }
           spc=spc-2;
           for(j=0;j<i;j++){
                printf("%d ",j);
           }
           for(j=i;j>=0;j--){
                printf("%d",j);
                if(j!=0){
                    printf(" ");
                }
           }
           if(spc<0){
            spc=0;
           }
        }
        else{
            spc=spc+2;
            for(j=0;j<spc;j++){
                printf(" ");
            }
            for(j=0;j<pos_l;j++){
                printf("%d ",j);
            }
            for(j=pos_l;j>=0;j--){
                printf("%d",j);
                if(j!=0){
                    printf(" ");
                }
            }
            pos_l--;
        }
        printf("\n");
    }
    return 0;
}
