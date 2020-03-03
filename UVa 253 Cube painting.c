#include<stdio.h>
int main()
{
    int x,k,i,j,cnt=0,sw=0;
    char cube[12];
    scanf("%s",cube);
    int ind[3][4]={{0,1,5,4},{1,2,4,3},{0,2,5,3}};
    int st[3][2]={{2,3},{0,5},{1,4}};
    int mine[]={7,8,10,9};
    for(i=0;i<3;i++){
            x=0;
        if((cube[st[i][0]]==cube[6] && cube[st[i][1]]==cube[11]) || (cube[st[i][1]]==cube[6] && cube[st[i][0]]==cube[11])){
                 for(j=0;j<4;j++){
                    for(k=0;k<4;k++){
                        if(x==4){
                            x=0;
                        }
                        if(cube[ind[i][x]]==cube[mine[k]]){
                            cnt++;
                        }
                        x++;
                    }
                    if(cnt==4){
                        sw=1;
                        break;
                    }
                    if(x==4){
                        x=0;
                    }
                    cnt=0;
                    x++;
                 }
        }
        if(sw==1){
            break;
        }
    }
    if(sw==0){
        printf("FALSE\n");
    }
    else{
        printf("TRUE\n");
    }
    return 0;
}
