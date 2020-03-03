#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,m,max,sw=0,sw2=1,cnt=0,l=0,tmp;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        for(m=0;m<n;m++){
                    if(ara[m]!=0 && sw2==1){
                                sw=1;
                                max=ara[m];
                                sw2=0;

                                max=ara[m];
                                ara[m]=0;
                    }
                    else if(sw==1){
                                        if(ara[m]>max){

                                            max=ara[m];
                                            ara[m]=0;
                                            j++;

                                    }
                    }
                     if(ara[m]==0){
                                        cnt++;
                    }
                    if(max!=tmp && max!=0){
                       printf("%d ",max);
                       tmp=max;
                    }

              }
              printf("\n");
              max=0;
              k++;
              if(cnt==n){
                 break;
                }
                cnt=0;

              sw=0;
              sw2=1;
    }
    return 0;
}
