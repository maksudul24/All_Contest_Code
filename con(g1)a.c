#include<stdio.h>
int main()
{
    int n,cnt,lmk,bob;
    cnt=0;
    scanf("%d %d",&lmk,&bob);
    while(lmk<=bob){
        lmk=(lmk*3)+lmk;
        bob=(bob*2)+bob;
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

