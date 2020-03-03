#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,k,ara[]={1,2,3,4,5,6},m,n=0,tst[8],pos[5];

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
                       printf("%d %d %d %d %d %d\n",ara[i],ara[j],ara[k],ara[pos[0]],ara[pos[1]],ara[pos[2]]);
                       tst[k]=0;


                    }
                }
                tst[j]=0;
            }
        }
        tst[i]=0;
    }

 return 0;
}
