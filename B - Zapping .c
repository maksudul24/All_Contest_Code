#include<stdio.h>
int main()
{
    int ara[2],i,max=0,position,oppose,turn,rturn;
    for(i=0;i<2;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>max){
            max=ara[i];
            position=i;
        }
    }

    if(position==0){
        oppose=1;
    }
    else{
        oppose=0;
    }
    turn=ara[position]-ara[oppose];
    rturn=101-(ara[position]+ara[oppose]);
    if(turn<rturn){
        printf("%d\n",turn);
    }
    else{
        printf("%d\n",rturn);
    }
    return 0;
}
