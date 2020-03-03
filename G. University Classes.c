#include<stdio.h>

int main()
{
    int ara[]={0,0,0,0,0,0,0};
    int n,i,j,maximum=1,sw=1;
    char gra[10],grb[10];
    scanf("%d",&n);
    if(n<=42){
                    scanf("%s",gra);
                    for(i=0;i<7;i++){
                        if(gra[i]=='1'){
                            ara[i]=1;
                        }
                    }

                    for(i=1;i<n;i++){
                        if(sw==1){
                            scanf(" %s",grb);
                            sw=0;
                        }
                        else{
                            scanf(" %s",gra);
                            sw=1;
                        }
                        for(j=0;j<7;j++){
                            if(gra[j]=='1' && grb[j]=='1'){
                                ara[j]++;
                                printf("m:%d,a:%d\n",maximum,ara[i]);
                                if(ara[j]>maximum){
                                    maximum=ara[j];
                                }
                             }


                        }
                    }
    }
    else{
        for(i=0;i<n;i++){
            scanf("%s",gra);
        }
        maximum=n;
    }

    printf("%d\n",maximum);

    return 0;

}
