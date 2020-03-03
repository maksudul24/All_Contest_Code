#include<stdio.h>
int main()
{
    int coc,cnt,m,carry,eat,key=1,key2=1;
    scanf("%d",&coc);
    cnt=coc;
    if(coc<3){
        cnt=coc;
    }
    else{
            while(key2==1){
                eat=coc/3;
                if(eat==1){
                    key2=0;
                }
                cnt=cnt+eat;
                carry=coc%3;
                if(carry==1 && key==1){
                    cnt++;
                    key=0;
                }
                if(carry==2 && key==1){
                    cnt++;
                    key=0;
                }
                coc=eat+carry;
            }
    }
            printf("%d\n",cnt);
    return 0;
}
