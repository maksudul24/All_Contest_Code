#include<stdio.h>
int main()
{
    int cont[4]={7,8,10,9},x,k,i,j,cnt,sw=5;
    char cube1[6],cube2[6],cube[14];
    scanf("%s",cube);
    int ind[3][4]={{0,1,5,4},{1,2,4,3},{0,2,5,3}};
    int st[3][2]={{2,3},{0,5},{1,4}};
    for(i=0;i<3;i++){
         x=0;
                 for(j=0;j<4;j++){
                    for(k=0;k<4;k++){
                        if(x==4){
                            x=0;
                        }
                        printf("%c",cube[ind[i][x]]);
                        x++;
                    }
                    if(x==4){
                        x=0;
                    }
                    printf("\n");
                    x++;
                 }
    }
    return 0;
}
