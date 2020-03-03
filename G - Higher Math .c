#include<stdio.h>
int main()
{
    int ara[3],i,max=0,pos,add=0,k,j;
    scanf("%d",&k);
    for(j=1;j<=k;j++){
                add=0;
                max=0;
                for(i=0;i<3;i++){
                    scanf("%d",&ara[i]);
                    if(ara[i]>max){
                        max=ara[i];
                        pos=i;
                    }
                }
                for(i=0;i<3;i++){
                    if(i!=pos){
                        add=(ara[i]*ara[i])+add;
                    }
                }
                if(add==(ara[pos]*ara[pos])){
                    printf("Case %d: yes\n",j);
                }
                else{
                    printf("Case %d: no\n",j);
                }
    }
    return 0;
}
