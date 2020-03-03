#include<stdio.h>
#include<string.h>
int main()
{
    int ara[8],ans,man[3500],i,j,k,sw=0,m,n=0,tst[8],pos[5],x,y;
    for(i=0;i<6;i++){
        scanf("%d",&ara[i]);
    }
    memset(tst,0,sizeof(tst));
    memset(man,0,sizeof(man));
    for(i=0;i<6;i++){
        tst[i]=1;
        for(j=0;j<6;j++){
            if(j!=i){
                tst[j]=1;
                for(k=0;k<6;k++){
                    if(k!=j && k!=i){
                        tst[k]=1;
                        for(m=0;m<6;m++){
                            if(tst[m]!=1){
                                pos[n]=m;
                                n++;
                            }
                        }
                        n=0;
                       x=ara[i]+ara[j]+ara[k];
                       y=ara[pos[0]]+ara[pos[1]]+ara[pos[2]];
                       if(x==y){
                        sw=1;
                        break;
                       }
                       tst[k]=0;
                    }
                }
                tst[j]=0;
            }

            if(sw==1){
                break;
            }
        }
        if(sw==1){
            break;
        }
        tst[i]=0;
    }
    if(sw==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");

    }
    return 0;
}
